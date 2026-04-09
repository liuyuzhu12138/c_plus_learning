//forstrl.cpp -- using for loop to count
#include <iostream>
#include <string>
int main()
{
    using namespace std;
    cout << "Enter an word: ";
    string word;
    cin >> word;

    //display letters in reverse order
    for (int i = word.size() - 1; i >= 0; i--)
        cout << word[i] ;
    cout << "\nBye." << endl;
    return 0;
}

