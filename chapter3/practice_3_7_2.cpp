//3.7.2
#include <iostream>
#include <cmath>

const int Foot2Inch = 12;
const double Inch2Meter = 0.0254;
const double Kg2Pound = 2.2;

double BMI(double weight, double height) {

    return weight/(std::pow(height, 2));
}
//在 C++ 中，pow 函数确实位于 std 命名空间内。它定义在 <cmath> 头文件中，通常通过 std::pow 的方式调用。
//如果包含的是C风格的 <math.h>，那么 pow 也会出现在全局命名空间中，但 C++ 更推荐使用 <cmath> 和 std::pow，以确保命名空间的正确管理并避免潜在的命名冲突。

int main() {

    double height_foot = 0;
    double height_inch = 0;
    double weight_pound = 0;

    std::cout << "Please enter your height in foot and Inch." << std::endl;
    std::cout << "Enter the foot of height: __\b\b";
    std::cin >> height_foot;

    std::cout << "Enter the inch of height: __\b\b";
    std::cin >> height_inch;

    std::cout << "Please enter your weight in pound: __\b\b";
    std::cin >> weight_pound;

    double height_meter = (height_foot * Foot2Inch + height_inch) * Inch2Meter;
    double weight_kg = weight_pound / Kg2Pound;
    double bmi = BMI(weight_kg, height_meter);

    std::cout << "Your BMI is: " << bmi << char(46) << std::endl;

    return 0;
}