#ifndef CONTROLLER_H
#define CONTROLLER_H

#include "model_square.h"

class Controller {

private:

	Square *object;

public:

	Controller(Square *_object);

	void run();

};

#endif