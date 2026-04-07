// Create by Shujia Huang on 2021-07-25
#include <iostream>
#include <string>

int main() {

    std::string name , dessert;

    std::cout << "Enter your name: \n";
    std::getline(std::cin, name);

    std::cout << "Enter your favorite dessert:\n";
    std::getline(std::cin, dessert);

    std::cout << "I have delicious " << dessert << " for you,  " << name << ".\n";

    return 0;
}