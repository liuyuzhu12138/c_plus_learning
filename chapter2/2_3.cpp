//getinfo.cpp -- input and output
#include <iostream>
int main()
{
    using namespace std;
    int carrots;
    cout << "How many carrots do you have?" << endl;
    cin >> carrots;
    
    cout << "Here are two more. ";
    carrots = carrots + 2;
//the next line concatenates output
    cout << "Now you have " << carrots << " carrots." << endl;
    /*这条c++语句和下面两种形式是一样的:
    形式一
    cout << "Now you have " 
         << carrots 
         << " carrots." 
         << endl;
    *形式二 
     cout << "Now you have " 
     cout << carrots 
     cout << " carrots." 
     cout << endl;   
         */
    
    return 0;
}