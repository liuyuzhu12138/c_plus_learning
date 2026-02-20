//3.7.3
#include <iostream>
#include <cmath>

const int turn_numb = 60;//六十进制转换的基数，60分=1度，60秒=1分
int main() {


    double degree, minutes, seconds;

    std::cout << "Enter a latitude in degrees, minutes and seconds." << std::endl;
    std::cout << "First, enter the degree: ";
    std::cin >> degree;

    std::cout << "Next, enter the minutes of arc: ";
    std::cin >> minutes;

    std::cout << "Finally, enter the seconds of arc: ";
    std::cin >> seconds;


    std::cout << degree << " degrees, " << minutes << " minutes, "
         << seconds << " seconds = " << degree + minutes/turn_numb+ seconds/std::pow (turn_numb,2) << " degrees" << std::endl;
//显然这里的std::pow (turn_numb,2)返回一个double类型的结果，虽然在这个特定的情况下它的值是一个整数（3600），但由于std::pow函数的返回类型是double，所以degree2的计算结果也是一个double类型。这种设计允许std::pow函数处理更广泛的输入和返回更精确的结果，尤其是在处理非整数幂时。
//std::pow函数是一个重载函数，返回类型由参数类型决定，一般都是浮点数。
//std::pow, std::powf, std::powl
//参数类型 (base, exp)	        返回值类型	说明
//至少一个为 long double	     long double	返回精度最高的类型。
//至少一个为 double 或整数类型	  double	    整数参数会被提升为 double。
//至少一个为 float	              float	       对应 powf 变体
//long double powl( long double base, long double exp ) (C++11 起)

    return 0;
}