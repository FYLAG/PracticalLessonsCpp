#include <iostream>

#define _N 9

int main(int argc, char const *argv[]) {

	int arr[_N] = { 0 };

	std::cout << "Enter the values of the array elements: ";

	for (int i = 0; i < _N; i++) {

		std::cin >> arr[i];

	}

	std::cout << "Array elements in reverse order = [ ";

	for (int i = _N - 1; i > 0; i--) {

		std::cout << arr[i] << ", ";

	}

	std::cout << arr[0] << " ]" << std::endl;

	return 0;

}