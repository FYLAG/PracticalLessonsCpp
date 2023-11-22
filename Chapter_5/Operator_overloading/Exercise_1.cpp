#include <iostream>

class Integer {

public:
	Integer(double n) : value(n) {
		
	}
 
	void print()  const {
		std::cout << "value: " << value << std::endl;
	}

	Integer operator * (const double& number) {
		return Integer { this->value * number };
	}

private:
	double value;

};

int main(int argc, char const *argv[]) {
	
	Integer test(1);

	test = Integer(10) * 5;

	test.print();

	return 0;
}
