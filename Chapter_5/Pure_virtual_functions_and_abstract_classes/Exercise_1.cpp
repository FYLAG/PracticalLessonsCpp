#include <iostream>
#include <string>

class Animal {

public:
    Animal(std::string name, unsigned int weight) : name(name), weight(weight) {

    }

    virtual void makeSound() const = 0;

    void print() const {
        std::cout << "Name: " << Animal::name
            << "\tWeight: " << Animal::weight << std::endl;
    }

private:
    std::string name;
    unsigned int weight;

};

class Cat : public Animal {

public:
    Cat(std::string name, unsigned int weight) : Animal(name, weight) {

    }

    void makeSound() const override {
        std::cout << "Miau" << std::endl;
    }

};

class Dog : public Animal {

public:
    Dog(std::string name, unsigned int weight) : Animal(name, weight) {

    }

    void makeSound() const override {
        std::cout << "Gov" << std::endl;
    }

};

int main(int argc, char const *argv[]) {

    Cat murzik("Murzik", 15);
    Dog pushok("Sharik", 20);
 
    murzik.print();
    murzik.makeSound();
 
    pushok.print();
    pushok.makeSound();

    return 0;

}