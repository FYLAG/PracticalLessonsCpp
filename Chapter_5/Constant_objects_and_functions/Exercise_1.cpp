#include <iostream>

class Integer {

public:
    Integer(int number);
    int getValue() const;
    void setValue(int number);
    void print() const;

private:
    int value;

};

Integer::Integer(int number) {
    value = number;
    std::cout << "Object created" << std::endl;
}

int Integer::getValue() const {
    return value;
}

void Integer::setValue(int number) {
    value = number;
}

void Integer::print() const {
    std::cout << "Value: " << value << std::endl;
}

int main(int argc, char const *argv[]) {
    
	const Integer integer(9);

	integer.print();

    return 0;

}
