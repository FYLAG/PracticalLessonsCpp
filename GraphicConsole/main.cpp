#include <iostream>
#include <Windows.h>
#include <vector>
#include <thread>
#include <chrono>
#include <cmath>

#include "headers/vector3.h"
#include "headers/sphere.h"

void setSizeWindow(int const &width, int const &height) {

	_COORD coord;

	coord.X = width;
	coord.Y = height;

	_SMALL_RECT rect;

	rect.Top = 0;
	rect.Left = 0;
	rect.Bottom = height - 1;
	rect.Right = width - 1;

	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleScreenBufferSize(hStdOut, coord);
	SetConsoleWindowInfo(hStdOut, TRUE, &rect);

}

void outAnimationCircle(int const &_x, int const &_y, float const &aspectRatio, float const &aspectChar) {

	char* screenBuffer = new char[_x * _y + 1];

	unsigned char arrGradientChars[] = " .,:!/r(l1ZH9W8$@";
	unsigned short arrGradientSize = std::size(arrGradientChars) - 1;

	unsigned short frame = 0;

	std::vector<float> arrBeamObstacle;
	std::vector<int> arrNumBeamObstacle;

	screenBuffer[_x * _y] = '\0';

	while (true) {

		int i = 0;

		float maxElement = 0,
			  minElement = 0;

		for (int y = 0; y < _y; y++) {

			for (int x = 0; x < _x; x++) {

				Vector3 uv = Vector3(static_cast<float>(x) - _x / 2.0f - 1.0f, static_cast<float>(y) - _y / 2.0f - 1.0f, 0);
				uv.y *= aspectChar * aspectRatio;

				Vector3 camera = Vector3(0, 0, 0);
				Vector3 cameraRay = Vector3(uv.x, uv.y, 10);

				Sphere objectSphere = Sphere(Vector3(0, 0, 3), 20.0f);	// TODO: camera direction must be taken into account

				objectSphere.x += std::sin(frame * 0.025f) * 25.0f;
				objectSphere.y += std::cos(frame * 0.025f) * 25.0f;

				float beamObstacle = objectSphere.checkHitBeam(cameraRay);

				if (beamObstacle > 0) {

					if (beamObstacle > maxElement) {
						maxElement = beamObstacle;
					}

					if (minElement == 0) {
						minElement = beamObstacle;
					} else {
						if (beamObstacle < minElement) {
							minElement = beamObstacle;
						}
					}

					arrBeamObstacle.push_back(beamObstacle);
					arrNumBeamObstacle.push_back(i);
				}

				screenBuffer[i++] = ' ';

			}

		}

		float step = (maxElement - minElement) / (arrGradientSize - 1);

		for (int j = 0; j < arrBeamObstacle.size(); j++) {

			int shade = 0;

			for (int k = 0; k < arrGradientSize; k++) {

				if (arrBeamObstacle[j] > step * k) {
					shade = k;
				} else {
					break;
				}

			}

			screenBuffer[arrNumBeamObstacle[j]] = arrGradientChars[shade];

		}

		arrBeamObstacle.erase(arrBeamObstacle.cbegin(), arrBeamObstacle.cend());
		arrNumBeamObstacle.erase(arrNumBeamObstacle.cbegin(), arrNumBeamObstacle.cend());

		system("cls");
		std::cout << screenBuffer;

		frame++;

		std::this_thread::sleep_for(std::chrono::milliseconds(3));

	}

}

int main(int argc, char const *argv[]) {

	const int winWidth = 240;
	const int winHeight = 60;

	const float aspectRatio = static_cast<float>(winWidth) / winHeight;
	const float aspectChar = 8.0f / 16.0f;

	setSizeWindow(winWidth, winHeight);

	std::thread newThread(outAnimationCircle, winWidth, winHeight, aspectRatio, aspectChar);
	newThread.detach();

	getchar();

	return 0;

}