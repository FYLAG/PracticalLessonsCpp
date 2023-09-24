#include <iostream>

/*
	Create a program that asks the user for the radius of a circle and,
	using the resulting radius, calculates the area of the circle.
*/

int main(int argc, char const *argv[]) {

	const double pi { 3.1415 };
	double radius { };

	std::cout << "Enter the radius: ";
	std::cin >> radius;

	const double area { pi * radius * radius };		// Calculate the area of a circle

	std::cout << "The area of the circle: " << area;

	return 0;

}