#include <iostream>

int main(int argc, char const *argv[]) {

	int* arr = new int[20] { };

	for (int i = 0; i < 20; i++) {

		arr[i] = i * 2 + 1;

	}

	std::cout << "Array:";

	for (int i = 0; i < 20; i++) {

		if (i % 5 == 0) {
			std::cout << "\n\t";
		}
		
		std::cout << *(arr + i) << "\t";

	}

	std::cout << "\n\nArray reverse order:";

	for (int i = 19; i >= 0; i--) {

		if ((i + 1) % 5 == 0) {
			std::cout << "\n\t";
		}
		
		std::cout << *(arr + i) << "\t";

	}

	delete [] arr;

	return 0;

}