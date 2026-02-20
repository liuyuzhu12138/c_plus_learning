// 3.7.7
#include <iostream>
const double Hyndred_Km2Mile = 62.14;
const double Gallon2Litre = 3.875;
int main() {

    double fuel_comsuption_ep = 0.0;
    std::cout << "Enter the fuel comsuption in European standard: ";
    std::cin >> fuel_comsuption_ep;

    double fuel_comsuption_us = ( Hyndred_Km2Mile) / (fuel_comsuption_ep/Gallon2Litre);
    std::cout << "The fuel comsuption in US standard is " << fuel_comsuption_us 
         << " Miles/Gallon (mpg)." << std::endl;  

    return 0;
}