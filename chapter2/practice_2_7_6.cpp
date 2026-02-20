// 2.7.6

#include <iostream>

double light_years_turn_astromonical_unit(double light_years) {

    return light_years * 63240;
}


int main() {

    double light_years = 0.0 ;
    std::cout << "Enter the number of light years: ";
    std::cin >> light_years;

    std::cout << light_years
         << " light years = "
         << light_years_turn_astromonical_unit(light_years)
         << " astromonical units." << std::endl;

    return 0;
}