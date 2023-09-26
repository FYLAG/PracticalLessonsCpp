#include "headers/view_console.h"

ViewConsole::ViewConsole(Square *_object) {

	this->object = _object;				// Assign an address to the private field
	this->object->addObserver(this);	// Call the method of the observer class through the child Square

	std::cout << "Enter value sides A and B: "; // Output text to the console

}

void ViewConsole::update() {
	// Call an object method and printing the return value to the console
	std::cout << "The area of the rectangle: " << this->object->getSquare() << std::endl;
	std::cout << "Enter value sides A and B: "; // Output text to the console

}