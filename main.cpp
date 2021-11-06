#include <iostream>
#include <string>
#include <vector>

int main() {
    std::vector<std::string> v1 = {"Mia", "Anastasia", "cat", "dog"};
    v1.push_back("Sweet");
    for (std::string s: v1){
        std::cout << s << std::endl;
        std::cout << "hello";
    }

}