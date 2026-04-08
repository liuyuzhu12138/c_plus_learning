//num_test.cpp -- use numeric test in for loop
#include <iostream>
int main()
{
    using namespace std;
    cout << "Enter the starting countdown value: ";
    int limit;
    cin >> limit;
    int i;
    for (i = limit; i ; i--)
        cout <<" i = "<< i << "\n";
    cout << "Done now that i = " << i << endl;//结果显而易见的证明了for loop是入口条件循环
    return 0;
}