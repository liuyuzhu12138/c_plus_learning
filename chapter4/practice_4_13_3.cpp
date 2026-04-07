// Create by Shujia Huang on 2021-07-25
#include <iostream>
#include <cstring>

int main() {

    char first_name[20], last_name[20];
    char final_name[50];

    std::cout << "Enter your first name: ";
    std::cin.getline(first_name, 20);

    std::cout << "Enter your last name: ";
    std::cin.getline(last_name, 20);

    strcpy(final_name, last_name);
    strcat(final_name, ", ");
    strcat(final_name, first_name);

    std::cout << "Here's the information in a single string: " << final_name << std::endl;

    return 0;
}