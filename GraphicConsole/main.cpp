#include <iostream>
#include <Windows.h>
#include <thread>
#include <chrono>
#include <cmath>

void outAnimationCircle(const int _x, const int _y, const float aspectRatio, const float aspectChar) {

	char* screen = new char[_x * _y + 1];

	int frame = 0;

	while (true) {

		int i = 0;

		for (int y = 0; y < _y; y++) {

			for (int x = 0; x < _x; x++) {

				char consoleChar = ' ';

				float xNew = (static_cast<float>(x) / _x * 2 - 1) * aspectRatio * aspectChar;
				float yNew = static_cast<float>(y) / _y * 2 - 1;

				xNew += std::sin(frame * 0.001);

				if (xNew * xNew + yNew * yNew < 0.5f) {

					consoleChar = '@';

				}

				screen[i++] = consoleChar;

			}

		}

		screen[_x * _y] = '\0';

		system("cls");

		std::cout << screen;

		frame++;

		std::this_thread::sleep_for(std::chrono::milliseconds(10));

	}

}

int main(int argc, char const *argv[]) {

	const int winSizeX = 160;
	const int winSizeY = 45;

	const float aspectRatio = static_cast<float>(winSizeX) / winSizeY;
	const float aspectChar = 8.0f / 16.0f;

	HWND hWindowConsole = GetConsoleWindow();
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleScreenBufferSize(hStdOut, {winSizeX, winSizeY});
	MoveWindow(hWindowConsole, 100, 100, winSizeX * 8, winSizeY * 16, TRUE);

	std::thread newThread(outAnimationCircle, winSizeX, winSizeY, aspectRatio, aspectChar);
	newThread.detach();

	getchar();

	return 0;

}
