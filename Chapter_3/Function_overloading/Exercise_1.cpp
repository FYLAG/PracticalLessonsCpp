#include <iostream>
#include <string>

int add(const int& a, const int& b) {

	return a + b;

}

double add(const double& a, const double& b) {

	return a + b;

}

std::string add(const std::string& a, const std::string& b) {

	return a + b;

}

int main(int argc, char const *argv[]) {

	std::cout << "Function result: " << add("My ", "text") << std::endl;

	return 0;

}
