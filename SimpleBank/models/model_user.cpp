#include "../headers/model_user.h"

User::User(string _firstName, string _secondName, string _patronymic,
		   unsigned short _age, string _login, string _pass) {

	this->firstName = _firstName;
	this->secondName = _secondName;
	this->patronymic = _patronymic;
	this->age = _age;

	this->login = _login;
	this->pass = _pass;

}

string User::getFirstName() {
	return this->firstName;
}

string User::getSecondName() {
	return this->secondName;
}

string User::getPatronymic() {
	return this->patronymic;
}

unsigned short User::getAge() {
	return this->age;
}

string User::getLogin() {
	return this->login;
}

bool User::isEqualsPass(string _pass) {
	return this->pass == _pass;
}