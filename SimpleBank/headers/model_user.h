#ifndef MODEL_USER_H
#define MODEL_USER_H

#include <string>

using std::string;

class User {

private:

	string firstName;
	string secondName;
	string patronymic;

	unsigned short age;

	string login;
	string pass;

public:

	User(string _firstName, string _secondName, string _patronymic,
		 unsigned short _age, string _login, string _pass);

	string getFirstName();

	string getSecondName();

	string getPatronymic();

	unsigned short getAge();

	string getLogin();

	bool isEqualsPass(string _pass);

};

#endif