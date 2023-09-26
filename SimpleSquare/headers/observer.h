#ifndef OBSERVER_H
#define OBSERVER_H

#include <vector>

class Observer {

public:

	virtual void update();

};

class Observable {

private:

	std::vector<Observer*> observers;

public:

	void addObserver(Observer *_observer);

	void updateObserver();

};

#endif