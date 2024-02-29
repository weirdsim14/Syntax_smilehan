#include <string>
#include <iostream>
#include <vector>

int main() {
    int x{7};
    std::string str{"Let us begin!"};
    int y = {8};
    std::cout << y << std::endl;
    std::vector<int> v{4, 2, 3, 1, 5};
    for (int &i : v){
        std::cout << i << "";
    }  

    return 0;
}   