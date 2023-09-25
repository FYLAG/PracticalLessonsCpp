#include <iostream>
#include <vector>

#include "headers/model_user.h"
#include "headers/model_card.h"
#include "headers/console_view.h"

int main(int argc, char const *argv[]) {

	setlocale(0, LC_ALL);

	std::vector<User> users = {
		User("Petrov", "Petr", "Petrovich", 20, "user_2003", "super.hesh"),
		User("Petrov", "Petr", "Petrovich", 30, "user_1993", "pass123")
	};

	std::vector<Card> cards;

	try {

		cards.insert(cards.end(), {
			Card("8800 1300 4476 0988", 1000.00L, users.at(0)),
			Card("8800 1400 7881 1480", 100000.50L, users.at(1))
		});

	} catch (std::exception&) {

		std::cout << "Unexpected error." << std::endl;

	}

	return 0;

}
