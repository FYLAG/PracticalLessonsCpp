#include <iostream>

int main(int argc, char const *argv[]) {

	unsigned int color = 0x04F1A2u;

	unsigned int* buffer = new unsigned int (0xFF);

	unsigned int blue = color & *buffer;

	unsigned int green = color >> 8 & *buffer;

	unsigned int red = color >> 16;

	std::cout << "HEX: " << std::hex << color <<
		"to RGB: " << std::dec << red << ", " << green << ", " << blue << std::endl;

	delete buffer;

	return 0;

}
