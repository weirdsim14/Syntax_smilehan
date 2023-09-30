// when data type of parameters are different
#include <iostream>

int add(int i, int j){
    return (i+j);
}

float add(float i, float j){
    return (i+j);
}

double add(double i, double j){
    return (i+j);
}
int main() {
    std::cout<< add(1, 2)<<std::endl;
    std::cout<< add(1.6f, 2.3f)<<std::endl;
    std::cout<< add(1.3, 2.5)<< std::endl;
}