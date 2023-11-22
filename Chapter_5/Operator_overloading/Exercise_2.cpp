#include <iostream>

class Rational {

public:
	Rational(int n, int n2) : numerator(n), denominator(n2) {

	}

	int getNumerator() {
		return this->numerator;
	}

	int getDenominator() {
		return this->denominator;
	}
 
	void print()  const {
		std::cout << "value: " << numerator << "/" << denominator << std::endl;
	}

	Rational operator + (const Rational& object) {

		if (this->denominator == object.denominator) {

			this->numerator += object.numerator;

		} else {

			this->numerator *= object.denominator;
			this->numerator += object.numerator * this->denominator;

			this->denominator *= object.denominator;

		}

		return *this;

	}

	Rational operator * (const Rational& object) {

		this->numerator *= object.numerator;
		this->denominator *= object.denominator;

		return *this;

	}

private:
	int numerator,
		denominator;

};

std::ostream& operator << (std::ostream& stream, Rational& object) {
	return stream << object.getNumerator() << "/" << object.getDenominator();
}

int main(int argc, char const *argv[]) {
	
	Rational test(1, 2);

	test = test + Rational(10, 4);

	std::cout << test << std::endl;

	return 0;
}
