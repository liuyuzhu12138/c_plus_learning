//choices.cpp -- array variations
#include <iostream>
#include <vector>
#include <array>
int main()
{
    double a1[4] = {1.2, 2.4, 3.6, 4.8};
    std::vector<double> a2 = {1.0/3.0, 1.0/5.0, 1.0/7.0, 1.0/9.0};
    //vector<double> a2 (4) = {1.0/3.0, 1.0/5.0, 1.0/7.0, 1.0/9.0};这种方式是错误的
    //vector<double> a2{1.0/3.0, 1.0/5.0, 1.0/7.0, 1.0/9.0};也可以
    std::array<double, 4> a3 = {1.0/3.0, 1.0/5.0, 1.0/7.0, 1.0/9.0};
    std::array<double, 4> a4;
    a4 = a3; // array objects can be assigned
    std::cout << "a1[2]: " << a1[2] << " at " << &a1[2] << std::endl;
    std::cout << "a2[2]: " << a2[2] << " at " << &a2[2] << std::endl;
    std::cout << "a3[2]: " << a3[2] << " at " << &a3[2] << std::endl;
    std::cout << "a4[2]: " << a4[2] << " at " << &a4[2] << std::endl;
    a1[-2] = 20.2;
    std::cout << "a1[-2]: " << a1[-2] << " at " << &a1[-2] << std::endl;
    std::cout << "a3[2]: " << a3[2] << " at " << &a3[2] << std::endl;
    std::cout << "a4[2]: " << a4[2] << " at " << &a4[2] << std::endl;
     return 0;

}