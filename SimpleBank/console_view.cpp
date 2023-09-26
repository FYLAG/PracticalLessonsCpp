#include "headers/console_view.h"

ConsoleView::ConsoleView(User *_modelUser, Card *_modelCard) {

	modelUser = _modelUser;
	modelUser->addObserver(this);

	modelCard = _modelCard;
	modelCard->addObserver(this);

}

void ConsoleView::update() {

	system("cls");
	printf("Temperature in Celsius: %.2f\n", 50);
	printf("Temperature in Farenheit: %.2f\n", 50);
	printf("Input temperature in Celsius: ");

}