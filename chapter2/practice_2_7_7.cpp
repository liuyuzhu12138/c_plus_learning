// 2.7.7
#include <iostream>

void display_time(double hours, double minutes) {

    std::cout << "Time: " << hours << ":" << minutes << std::endl;

    return;
}

int main() {

    double hours = 0.0, minutes = 0.0;
    std::cout << "Enter the number of hours: ";
    std::cin >> hours;

    std::cout << "Enter the number of minutes: ";
    std::cin >> minutes;

    display_time(hours, minutes);

    return 0;
}