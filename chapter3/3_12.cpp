//modulua.cpp -- uses % operator to convert lbs to stones
#include <iostream>
int main()
{
    using namespace std;
    const int Lbs_per_stn = 14;
    int lbs;

    cout << "Enter your weight in pounds: ";
    cin >> lbs;
    int stn = lbs / Lbs_per_stn; // whole stones
    int lbs_left = lbs % Lbs_per_stn; // leftover pounds
    cout << "Your weight is " << stn << " stone(s) and "
         << lbs_left << " pound(s)." << endl;

    return 0;
}