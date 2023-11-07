#include "../headers/model_square.h"

Square::Square() : sideA(0), sideB(0) {

}

Square::Square(uint _sideA, uint _sideB) {

	this->sideA = _sideA;
	this->sideB = _sideB;

}

void Square::setSideA(uint _var) {
	this->sideA = _var;
}

uint Square::getSideA() {
	return this->sideA;
}

void Square::setSideB(uint _var) {
	this->sideB = _var;
}

uint Square::getSideB() {
	return this->sideB;
}

ullong Square::getSquare() {

	uint a = this->sideA,
		 b = this->sideB;

	ullong result = a * b;

	return result;

}
