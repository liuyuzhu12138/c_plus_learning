// 3.7.5
#include <iostream>
const int one_topercent = 100;//百分数转换的基数，1表示100%

int main() {

    long long population_world = 0, population_China = 0;
    std::cout << "Enter the world's population: ";
    std::cin >> population_world;
    std::cout << "Enter the population of China: ";
    std::cin >> population_China;

    double rate = double(population_China)/population_world;
    std::cout.setf(std::ios_base::fixed, std::ios_base::floatfield);
    std::cout.precision(5);
    std::cout << "The population of the China is " << rate * one_topercent
         << "\x25 of the world population." << std::endl;

    return 0;
}