#include <iostream>
using std::cout;
using std::endl;

int add(int i, int j){
        return (i + j);
    }

    double add(double i, double j){
        return (i + j);
    }

int main (){
    std::cout << add(10, 20) <<std::endl;
    std::cout << add(10.25, 22.25) << std::endl;
    
    return 0;
}