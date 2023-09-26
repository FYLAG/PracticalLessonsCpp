#ifndef VIEW_CONSOLE_H
#define VIEW_CONSOLE_H

#include "model_user.h"
#include "model_card.h"
#include "observer.h"

class ConsoleView: public Observer {

private:

	User *modelUser;
	Card *modelCard;

public:

	ConsoleView(User *_modelUser, Card *_modelCard);

	virtual void update();

};

#endif