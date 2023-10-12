#include <iostream>

class Integer {

public:

	Integer(int value) {

		this->value = value;

		std::cout << "Object is created." << std::endl;

	}

	void setValue(int value) {

		this->value = value;

	}

	int getValue() {

		return this->value;

	}

	void printValue() {

		std::cout << this->value << std::endl;

	}

private:

	int value;

};

int main(int argc, char const *argv[]) {

	Integer* object = new Integer(0);

	object->setValue(99);

	std::cout << "Value: " << object->getValue() << std::endl;

	object->setValue(11);

	std::cout << "Value: ";
	
	object->printValue();

	delete object;

	return 0;

}