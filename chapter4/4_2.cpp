//string.cpp -- storing strings in a array
#include <iostream>
#include <cstring> // for strlen()
int main()
{
    using namespace std;
    
    const int Size = 15;
    char name1[Size]; // empty array
    char name2[Size] = "C++owboy"; // initialized array
    cout << "Howdy! I'm " << name2 << "!\n"
         << "What's your name? ";
    cin >> name1;
    cout << "Well, " << name1 << ", your name has "
         << strlen(name1) << " letters and is stored\n"
         << "in an array of " << sizeof(name1) << " bytes.\n";
         << "Your initial is " << name1[0] << ".\n";
    name2[3] = '\0'; // set to null character
    cout << "Here are the first 3 characters of my name: "
         << name2 << endl;  
    
    return 0;
}