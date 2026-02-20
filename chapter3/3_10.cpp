//airth.cpp -- some C++ arithmetic
#include <iostream>
int main()
{
    using namespace std;    
    double hats,heads;

    cout.setf(ios_base::fixed, ios_base::floatfield); // use fixed-point notation
    cout << "Enter a number: ";
    cin >> hats;
    cout << "Enter another number: ";
    cin >> heads;

    cout << "hats = " << hats << "; heads = " << heads << endl;
    cout << "hats + heads = " << hats + heads << endl;
    cout << "hats - heads = " << hats - heads << endl;
    cout << "hats * heads = " << hats * heads << endl;
    if (heads != 0.0)
        cout << "hats / heads = " << hats / heads << endl;
    else
        cout << "Can't divide by 0!" << endl;
    return 0;
}