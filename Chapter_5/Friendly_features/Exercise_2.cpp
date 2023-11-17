#include <iostream>
 
class Integer {

    friend int equal(const Integer&, const Integer&);

public:

	Integer(int number) {
		value = number;
	}

	void print() const {
		std::cout << "Value: " << value << std::endl;
	}

private:
	int value;

};

int equal(const Integer& object1, const Integer& object2) {

		return object1.value - object2.value;

}

int main(int argc, char const *argv[]) {

	std::cout << "This value less: " << equal(Integer(0), Integer(9)) << std::endl;
	std::cout << "Values equal: " << equal(Integer(9), Integer(9)) << std::endl;
	std::cout << "This value larger: " << equal(Integer(9), Integer(0)) << std::endl;

	return 0;

}
