#include <iostream>

/*
	Create a program that asks the user for his weight (in kilograms)
	and height (in centimeters), calculates the body mass index
	from them and displays it on the console.
*/

int main(int argc, char const *argv[]) {

	float weight;
	unsigned int height;

	std::cout << "Enter your weight (in kilograms): ";
	std::cin >> weight;

	std::cout << "Enter your height (in centimeters): ";
	std::cin >> height;

	// Calculate body mass index by converting height to meters
	float indexMass { weight / (height * height / 10000) };

	std::cout << "Your body mass index - " << indexMass << std::endl;

	return 0;

}