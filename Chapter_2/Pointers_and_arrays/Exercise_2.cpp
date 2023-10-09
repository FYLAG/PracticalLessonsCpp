#include <iostream>

#define SIZE 20

int main(int argc, char const *argv[]) {

	int* arr = new int[SIZE] { };
	int* arrElement = arr;

	for (int i = 0; i < SIZE; i++) {

		arr[i] = i * 2 + 1;

	}

	std::cout << "Array:";

	for (int i = 0; i < 20; i++) {

		if (i % 5 == 0) {
			std::cout << "\n\t";
		}
		
		std::cout << *arrElement++ << "\t";

	}

	std::cout << "\n\nArray reverse order:";

	for (int i = 0; i < 20; i++) {

		if (i % 5 == 0) {
			std::cout << "\n\t";
		}
		
		std::cout << *--arrElement << "\t";

	}

	delete arrElement;
	delete [] arr;

	return 0;

}