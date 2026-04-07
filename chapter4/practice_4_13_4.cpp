// Create by Shujia Huang on 2021-07-25
#include <iostream>
#include <string>

int main() {
    std::string first_name, last_name, final_name;

    std::cout << "Enter your first name: ";
    getline(std::cin, first_name);

    std::cout << "Enter your last name: ";
    getline(std::cin, last_name);

    final_name = last_name + ", " + first_name;

    std::cout << "Here's the information in a single string: " << final_name << std::endl;

    return 0;
}