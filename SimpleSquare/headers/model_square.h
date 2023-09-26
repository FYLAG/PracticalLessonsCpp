#ifndef MODEL_SQUARE_H
#define MODEL_SQUARE_H

#include <iostream>

#include "observer.h"

typedef unsigned long long ullong;

class Square : public Observable {

private:

	int sideA, sideB;

public:

	Square();

	Square(int _sideA, int _sideB);

	void setSideA(int _var);

	int getSideA();

	void setSideB(int _var);

	int getSideB();

	ullong getSquare();

};

#endif