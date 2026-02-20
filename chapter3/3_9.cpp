//fltadd.cpp -- precision of floating-point numbers
#include <iostream>
int main()
{
    using namespace std;
    float a = 2.34e+22f; // a very large number
    float b = a + 1.0f; // adding 1 to a does not change a

    cout << "a = " << a << endl;
    cout << "b - a = " << b - a << endl;
    return 0;
}