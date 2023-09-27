#include <iostream>
using std::cout;
using std::endl;

class Dog {
    private:
        int age;
    public:
        int getAge();
        void setAge(int a);
};

int Dog::getAge(){
    return age;
}
void Dog::setAge(int a){
    int age = a;
}
int main()
{
    Dog *dp;
    dp = new Dog;
    if(!dp){
        std::cout << "Memory allocation is impossible";
        return 1;
    }

    dp -> setAge(5);
    std::cout << "the value allcated at memory is "
              << dp->getAge() <<".";
    delete dp;
    return 0;

}



