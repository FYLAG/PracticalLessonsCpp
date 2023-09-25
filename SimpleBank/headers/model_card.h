#ifndef MODEL_CARD_H
#define MODEL_CARD_H

#include "model_user.h"

typedef long double ldouble;

class Card : public User {

private:

	string number;

	ldouble cash;

public:

	Card(string _number, ldouble _cash, const User &_user);

	string getNumber();

	ldouble getCash();

};

#endif