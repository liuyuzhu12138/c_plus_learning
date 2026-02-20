//sqrt.cpp --using the sqrt() function
#include <iostream>
#include <cmath> // prototype for sqrt()
int main()
{
    using namespace std;
    double area;
    cout << "Enter the floor area, in square feet, of your home: ";//请输入您住宅的建筑面积（单位：平方英尺）：
    cin >> area;
    double side;
    side = sqrt(area);
    cout << "That's the equivalent of a square " << side//这相当于一个正方形 
         << " feet to the side." << endl;
    cout << "How fascinating!" << endl;
    return 0;
}