#include <iostream>

int add(int i=1, int j=2)
{
    return(i + j);
}
int main(){
    std::cout<<add()<<"."; // no real parameters
    std::cout<<add(10)<< ".";
    std::cout<<add(10, 20);
    return 0;
}