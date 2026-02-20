// 2.7.5

#include <iostream>


double celsiu_turnto_fahrenit(double celsius) {
    return 1.8 * celsius + 32.0;
}


int main() {

    double celsius =0.0;
    std::cout << "Please enter a celsius value: ";
    std::cin >> celsius;

    std::cout << celsius << " degrees Celsius is "
         << celsiu_turnto_fahrenit(celsius) << " degrees Fahrenheit." << std::endl;

    return 0;
}