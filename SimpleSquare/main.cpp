//	A program to find the area of a rectangle.
//	This program used the MVC pattern.

#include <iostream>

#include "headers/model_square.h"
#include "headers/view_console.h"
#include "headers/controller.h"
#include "headers/observer.h"

int main(int argc, char const *argv[]) {

	Square object; // Create object Square

	ViewConsole view(&object);		// Create object with object reference parameter

	Controller controller(&object);	// Create object with object reference parameter

	controller.run(); // Call the object method
	
	return 0;

}
