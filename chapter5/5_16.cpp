//textinl.cpp -- reading chars with a while loop
#include <iostream>
int main()
{
    using namespace std;
    char ch;
    int count = 0; //use base input
    
    cout << "Enter characters; enter # to quit:\n";
    cin >> ch; // get first char
    while (ch != '#')
    {
        cout << ch; // echo the char
        ++count; // increment count
        cin >> ch; // get another char
    }
    cout << endl << count << " characters read\n";
    return 0;
}