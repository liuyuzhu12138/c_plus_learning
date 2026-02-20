//arrrayone.cpp -- small arrays of integers
#include <iostream>
int main()
{
    using namespace std;
    int yams[3]; // creates array with 3 elements
    yams[0] = 7; // assign value to first element
    yams[1] = 8; // assign value to second element
    yams[2] = 6; // assign value to third element

    int yamcosts[3] = {20, 30, 5}; // create and initialize array
    cout << "Total yams = " << yams[0] + yams[1] + yams[2] << endl;
    cout << "The package with " << yams[1] << " yams costs " << yamcosts[1] << " cents per yam.\n";
    int total = yams[0] * yamcosts[0] + yams[1] * yamcosts[1] ;
    total = total + yams[2] * yamcosts[2];
    cout << "The total yam expense is " << total << " cents.\n";

    cout << "\nSize of yams array = " << sizeof(yams) << " bytes.\n";

    cout << "Size of one element = " << sizeof(yams[0]) << " bytes.\n";
    
    return 0;
}