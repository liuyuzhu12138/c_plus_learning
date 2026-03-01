//numstr.cpp -- following number input with line input
#include <iostream>
int main()
{
    using namespace std;
    cout << "What year was your house built?\n";
    int year = 0;
    cin >> year;
    cout << "What is its street address?\n";
    cin.get(); // skip newline left in input buffer
    char address[80];
    cin.get(address, 80); // read through newline
    //或者使用链式调用：(cin >> year).get().get(address, 80);或者(cin >> year).get(ch).get(address, 80);
    cout << "Year built: " << year << endl;
    cout << "Address: " << address << endl;
    cout << "Done!" << endl;
    return 0;
}