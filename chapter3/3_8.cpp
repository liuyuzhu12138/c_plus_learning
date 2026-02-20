//floatnum.cpp -- floating-point types
#include <iostream>
int main()
{
    using namespace std;
    cout.setf(ios_base::fixed, ios_base::floatfield); // fixed-point notation
    float tub = 10.0 / 3.0; // a regular fraction
    double mint = 10.0 / 3.0; // a regular fraction
    const float million = 1.0e6; // 1 million, as a float
    cout.precision(6) ;

    cout << "tub = " << tub;
    cout << ", a million tubs = " << million * tub ;
    cout << ",\nand ten million tubs = " << 10 * million * tub << endl;

    cout << "mint = " << mint;
    cout << ", a million mints = " << million * mint << endl;
    return 0;
}