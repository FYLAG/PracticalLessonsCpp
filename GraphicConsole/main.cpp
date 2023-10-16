#include <iostream>
#include <Windows.h>
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

	unsigned char arrGradientChars[] = " .,:!/r(l1Z4H9W8$@";
	unsigned short arrGradientSize = std::size(arrGradientChars) - 2;

	unsigned short frame = 0;

	while (true) {

		int i = 0;

		for (int y = 0; y < _y; y++) {

			for (int x = 0; x < _x; x++) {

				Vector3 uv = Vector3(static_cast<float>(x) - _x / 2.0f - 1.0f, static_cast<float>(y) - _y / 2.0f - 1.0f, 0);
				uv.y *= aspectChar * aspectRatio;

				Vector3 camera = Vector3(0, 0, 0);
				Vector3 cameraRay = Vector3(uv.x, uv.y, 10);

				Sphere objectSphere = Sphere(Vector3(0, 0, 3), 10.0f);

				objectSphere.x += std::sin(frame * 0.025f) * 30.0f;
				objectSphere.y += std::cos(frame * 0.025f) * 30.0f;

				float beamObstacle = objectSphere.checkHitBeam(cameraRay);

				int colorPixel = 0;

				if (beamObstacle > 0) {
					colorPixel = arrGradientSize;
				}

				screenBuffer[i++] = arrGradientChars[colorPixel];

			}

		}

		screenBuffer[_x * _y] = '\0';

		system("cls");
		std::cout << screenBuffer;

		// getchar();
		
		frame++;

		std::this_thread::sleep_for(std::chrono::milliseconds(1));

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