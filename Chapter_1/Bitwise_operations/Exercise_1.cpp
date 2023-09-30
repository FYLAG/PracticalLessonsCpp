#include <iostream>

int main(int argc, char const *argv[]) {

	unsigned int packed = 0;	// Variable that stores a packed number
	unsigned char buffer = 0;	// Variable to read the character

	std::cout << "Enter a first character: ";
	std::cin >> buffer;	// Read the first character

	packed |= buffer;	// put the first character into the number
	packed <<= 8;		// shift left by byte

	std::cout << "Enter a second character: ";
	std::cin >> buffer; // Read the second character

	packed |= buffer;	// put the second character into the number
	packed <<= 8;		// shift left by byte

	std::cout << "Enter a third character: ";
	std::cin >> buffer; // Read the third character

	packed |= buffer; // put the third character into the number

	std::cout << "Result packing: " << packed << std::endl;

	unsigned int sample = 0xFF;	// mask for reading (0000'0000'1111'1111)

	buffer = packed & sample;	// apply a mask
	std::cout << "Third character: " << buffer << std::endl;

	buffer = (packed >> 8) & sample;	// shift right by byte and apply a mask
	std::cout << "Second character: " << buffer << std::endl;

	buffer = (packed >> 16) & sample;	// shift right by 2 byte and apply a mask
	std::cout << "First character: " << buffer << std::endl;

	return 0;

}