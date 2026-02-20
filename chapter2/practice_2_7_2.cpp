//2.7.2
#include <iostream>
int main() {
    const int yard_by_long = 220;
    int distance =0 ;
    std::cout << "Enter distance in yards: ";
    std::cin >> distance;
    std::cout << "The distance in long is " << distance * yard_by_long << std::endl;
    return 0;
}