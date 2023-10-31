#include <iostream>

class Integer {

public:

	Integer(int number) {
		value = number;
	}

	Integer(const Integer &obj) {
		value = obj.value;
	}

	void print() const {
		std::cout << "Value: " << value << std::endl;
	}

private:

	int value;

};

int main(int argc, char const *argv[]) {

	Integer var(10);
	Integer var2(var);

	var2.print();

	return 0;

}
