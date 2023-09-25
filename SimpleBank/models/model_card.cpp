#include "../headers/model_card.h"

Card::Card(string _number, ldouble _cash, const User &_user) : User(_user) {

	this->number = _number;
	this->cash = _cash;

}

string Card::getNumber() {
	return this->number;
}

ldouble Card::getCash() {
	return this->cash;
}