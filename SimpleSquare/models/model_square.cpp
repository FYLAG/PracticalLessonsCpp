#include "../headers/model_square.h"

Square::Square() : sideA(0), sideB(0) {

}

Square::Square(int _sideA, int _sideB) {

	this->sideA = _sideA;
	this->sideB = _sideB;

}

void Square::setSideA(int _var) {
	this->sideA = _var;
}

int Square::getSideA() {
	return this->sideA;
}

void Square::setSideB(int _var) {
	this->sideB = _var;
}

int Square::getSideB() {
	return this->sideB;
}

ullong Square::getSquare() {

	int a = this->sideA,
		b = this->sideB;

	ullong result = a * b;

	return result;

}
