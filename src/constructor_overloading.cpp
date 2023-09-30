#include <iostream>

class Dog{
private:
    int age;
public:
    Dog(){age=1;}
    Dog(int a) 
    {age = a;}
    ~Dog();
    int getAge();
    void setAge(int a);

};
Dog::~Dog(){
    std::cout << "destructed\n";
}
int Dog::getAge(){
    return age;
}

void Dog::setAge(int a){
    age = a;
}

int main(){
    Dog happy[5];
    Dog meri[5] = {1, 2, 3, 4, 5};
    for (int i=0; i<5; i++)
    std::cout<<happy[i].getAge()<<
    "," <<meri[i].getAge()<<std::endl;

    
    return 0;
}