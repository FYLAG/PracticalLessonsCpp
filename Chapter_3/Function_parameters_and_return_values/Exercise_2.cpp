#include <iostream>
#include <math.h>

float exponentiation(float value, float degree) {

	float result = std::pow(value, degree);

	return result;

}

int main(int argc, char const *argv[]) {

	std::cout << "Function result: " << exponentiation(10, -2) << std::endl;

	return 0;

}
