#include <iostream>
#include <algorithm>
#include <string>

std::string reverseString() {

	std::string line = "";

	std::cout << "Enter the string: ";
	std::getline(std::cin, line, ';');		// Getline reads the input value up to the specified character

	std::reverse(line.begin(), line.end());	// The function reverse the positions of elements within the specified range

	return line;

}

int main(int argc, char const *argv[]) {

	std::cout << "Result from function: " << reverseString() << std::endl;

	return 0;

}