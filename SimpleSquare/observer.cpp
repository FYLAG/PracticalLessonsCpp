#include "headers/observer.h"

void Observer::update() {

}

void Observable::addObserver(Observer *_observer) {

	observers.push_back(_observer);		// Adding a new element to the array

}

void Observable::updateObserver() {
	
	for (Observer* item : observers) {	// Iterates through all the elements of the array
		item->update();					// and calls the method implemented in it
	}

}