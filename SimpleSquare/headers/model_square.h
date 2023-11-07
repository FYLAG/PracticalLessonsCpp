#ifndef MODEL_SQUARE_H
#define MODEL_SQUARE_H

#include <iostream>

#include "observer.h"

typedef unsigned long long ullong;
typedef unsigned int uint;

class Square : public Observable {

private:

	uint sideA, sideB;

public:

	Square();

	Square(uint _sideA, uint _sideB);

	void setSideA(uint _var);

	uint getSideA();

	void setSideB(uint _var);

	uint getSideB();

	ullong getSquare();

};

#endif