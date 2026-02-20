// 3.7.1

#include <iostream>


const int Foot2inch = 12;

int main() {

    int input_height = 0;
    std::cout << "Please input you height in inch: __\b\b\b";
    std::cin >> input_height;

    int height_foot = input_height / Foot2inch;
    int height_inch = input_height % Foot2inch;

    std::cout << "Your height in inch is: " << input_height 
         << "; transforming in foot and inch is: " 
         << height_foot << " foot "
         << height_inch << " inch." << std::endl;

    return 0;
}