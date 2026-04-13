//textin2.cpp -- Unlike 516.cpp,using cin.get()
#include <iostream>
int main()
{
    using namespace std;
    char ch;
    int count = 0; //use base input
    
    cout << "Enter characters; enter # to quit:\n";
    cin.get(ch); // get first char
    while (ch != '#')
    {
        cout << ch; // echo the char
        ++count; // increment count
        cin.get(ch); // get another char
    }
    cout << endl << count << " characters read\n";
    return 0;
}