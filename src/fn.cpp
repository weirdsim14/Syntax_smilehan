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
    age = a;
}
int main()
{
    Dog *dp;
    dp = new Dog[10];
    if(!dp){
        std::cout << "Memory allocation is impossible";
        return 1;
    }
    for(int i=0; i<10; i++)
    {
        dp[i].setAge(i);
    } 
    for(int i=0; i<10; i++) 
    {
            std::cout << i << "th age of object is" <<
            dp[i].getAge() << " ." << std::endl;
    }

    delete[] dp;
    return 0;

}



