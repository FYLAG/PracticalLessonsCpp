#include <iostream>

int main(int argc, char const *argv[]) {

	unsigned int arraySize;

	std::cout << "Enter size array: ";
	std::cin >> arraySize;

	int* arr = new int[arraySize];

	for (int i = 0; i < arraySize; i++) {

		*(arr + i) = i * i;

	}

	unsigned int sum = 0;

	for (int i = 0; i < arraySize; i++) {

		sum += arr[i];

	}

	std::cout << "Sum array: " << sum << std::endl;

	delete [] arr;

	return 0;

}