#include <iostream>

/*
	Program that converts a value from HEX to RGB.
*/

int main(int argc, char const *argv[]) {

	unsigned int color = 0x04F1A2u;	// Variable that stores the color

	unsigned int* buffer = new unsigned int (0xFFu);	// Mask for obtaining color components

	unsigned int red = (color >> 16) & *buffer;		// Get the red color value

	unsigned int green = (color >> 8) & *buffer;	// Get the green color value

	unsigned int blue = color & *buffer;			// Get the blue color value

	std::cout << "HEX: " << std::hex << color <<
		"to RGB: " << std::dec << red << ", " << green << ", " << blue << std::endl;

	delete buffer;	// Free up memory

	return 0;

}
