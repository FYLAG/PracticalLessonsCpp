#include "headers/controller.h"

Controller::Controller(Square *_object) {

	this->object = _object; // Assign an address to the private field

}

void Controller::run() {

	int scanVarFirst, scanVarSecond;

	bool isZero = false;

	try { // If an error occurs, the program will not terminate abnormally

		do {

			scanf("%d", &scanVarFirst);			// Waiting for and reading user input
			scanf("%d", &scanVarSecond);

			object->setSideA(scanVarFirst);		// The values read from the input stream are assigned to the object
			object->setSideB(scanVarSecond);	// through the methods implemented for this purpose

			isZero = scanVarFirst == 0 || scanVarSecond == 0;

			if (!isZero) { // If the numbers are not zero, the view is updated through the object method
				object->updateObserver();
			}

		} while (!isZero); // Continue the loop if the numbers are not zero

	} catch (std::exception&) {

		std::cout << "Unexpected error." << std::endl; // Output error message to the console

	}

}