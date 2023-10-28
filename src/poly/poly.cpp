#include <iostream>

class Animal {
public:
    virtual void makeSound() { // virtual function
        std::cout << "The animal makes a sound" << std::endl;
    }
};

class Dog : public Animal {
public:
    void makeSound() override { // overriding the virtual function in base class
        std::cout << "The dog barks" << std::endl;
    }
};

class Cat : public Animal {
public:
    void makeSound() override { // overriding the virtual function in base class
        std::cout << "The cat meows" << std::endl;
    }
};

int main() {
    Animal* animalPtr = new Dog(); // pointer of type Animal pointing to a Dog object
    animalPtr->makeSound(); // Output: "The dog barks"

    animalPtr = new Cat(); // pointer now pointing to a Cat object
    animalPtr->makeSound(); // Output: "The cat meows"

    delete animalPtr;
    return 0;
}
