#include<iostream>
int main()
{   
    using namespace std;
    char alarm = '\033';
    int k\u00F6rper=15;
    cout << "Let them eate g\u00E2teau."<< endl;
    cout <<"\u222B"<< endl;
    cout << alarm << "Don't do that again!"<<alarm <<'\a' << endl;
    cout << "Ben\010 \"Buggsise\" Hacker\nwas here!" << endl;
    cout << endl;
    cout << '\n';
    cout << "\n";
    cout << "hi0x8there";  // ASCII code for Ctrl+Z (EOF character)
    cout << "Done!" << endl;
    return 0;
}