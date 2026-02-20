// 2.7.4

#include <iostream>

int main() {

    int years, months;
    std::cout << "Enter your age: ";
    std::cin >> years;

    months = years * 12;
    std::cout << years << " year(s) is " << months << " monthes." << std::endl;
    return 0;
}