#include <iostream>
 
class Integer {

public:
	Integer(int number) {
		value = number;
	}

	int equal(Integer& object) const {

		return this->value - object.value;

	}

	void print() const {
		std::cout << "Value: " << value << std::endl;
	}

private:
	int value;

};

int main(int argc, char const *argv[]) {

	std::cout << "This value less: " << Integer(0).equal(Integer(9)) << std::endl;
	std::cout << "Values equal: " << Integer(9).equal(Integer(9)) << std::endl;
	std::cout << "This value larger: " << Integer(9).equal(Integer(0)) << std::endl;

	return 0;

}
