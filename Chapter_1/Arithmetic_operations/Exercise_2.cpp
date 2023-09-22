#include <iostream>

int main(int argc, char const *argv[]) {

	const double pi = 3.1415;
	double radius;

	std::cout << "Enter the radius: ";
	std::cin >> radius;

	const double area = pi * radius * radius;

	std::cout << "The area of the circle: " << area;

	return 0;

}
