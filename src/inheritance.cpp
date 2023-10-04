#include <iostream>

class Animal {
public:
    void eat() {
        std::cout << "I can eat!" << std::endl;
    }
};

class Dog : public Animal {
public:
    void bark() {
        std::cout << "I can bark! Woof! Woof!" << std::endl;
    }
};

int main() {
    Dog myDog;
    myDog.eat();  // Inherited from Animal class
    myDog.bark(); // Specific to Dog class

    return 0;
}
