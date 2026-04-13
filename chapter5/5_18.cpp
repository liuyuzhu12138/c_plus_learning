//textin3.cpp -- reading chars  to end file
#include <iostream>
int main()
{
    using namespace std;
    char ch;
    int count = 0;
    cout << "Enter characters; enter # to quit:\n";
    cin.get(ch); // attempt to read a char
    while (cin.fail() == false )
    {
        cout << ch; // echo the char
        ++count;
        cin.get(ch); // get another char
    }
    cout << endl << count << " characters read.\n";
    return 0;
}