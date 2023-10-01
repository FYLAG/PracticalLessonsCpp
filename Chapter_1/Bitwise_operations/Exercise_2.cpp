#include <iostream>

int main(int argc, char const *argv[]) {

	unsigned int rgb = 0;		// Variable that stores the color
	unsigned int buffer = 0;	// Variable to read the character

	std::cout << "Red: ";
	std::cin >> buffer;	// Read the red color

	rgb |= buffer;	// Put the red color into the number
	rgb <<= 8;		// Shift left by byte

	std::cout << "Green: ";
	std::cin >> buffer;	// Read the green color

	rgb |= buffer;	// Put the green color into the number
	rgb <<= 8;		// Shift left by byte

	std::cout << "Blue: ";
	std::cin >> buffer;	// Read the blue color

	rgb |= buffer;		// Put the blue color into the number

	// Output RGB color value in hex format
	std::cout << "RGB - #" << std::hex << std::uppercase << rgb << std::endl;

	return 0;
}
