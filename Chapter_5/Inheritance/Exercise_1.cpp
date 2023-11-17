#include <iostream>
#include <string>

class Animal {

public:
	Animal(std::string name, unsigned int weight) : name(name), weight(weight) {
	
	}

	void print() const {
		std::cout << "Name: " << name << "\tWeight: " << weight << std::endl;
	}

private:
	std::string name;
	unsigned int weight;

};

class Cat : public Animal {

public:
	Cat(std::string name, unsigned int weight) : Animal(name, weight) {

	}

};

class Dog : public Animal {

public:
	Dog(std::string name, unsigned int weight) : Animal(name, weight) {

	}

};

int main(int argc, char const *argv[]) {

	Cat cat("Barsik", 6);
	Dog dog("Barbos", 12);

	cat.print();
	dog.print();

	return 0;

}