//textin4.cpp -- reading chars with cin.get()
#include <iostream>
int main()
{
    using namespace std;
    int ch;                                       //should be int, not char, to handle EOF
    int count = 0;
    while ((ch=cin.get()) != EOF)
    {
        cout.put(static_cast<char>(ch));          //test for end-of-file
        ++count;
    }
    cout <<endl << count << " characters read\n";
    return 0;
}