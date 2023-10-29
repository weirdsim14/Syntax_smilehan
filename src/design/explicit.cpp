#include <iostream>

class Box {
public:
    explicit Box(int size) : size(size) {}  // With explicit
    int size;
};

void printBoxSize(const Box& box) {
    std::cout << "Box size: " << box.size << std::endl;
}

int main() {
    // printBoxSize(42);  // Compiler error
    printBoxSize(Box(42));  // Explicit conversion required
    return 0;
}
