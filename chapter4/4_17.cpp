//use_new.cpp -- using the new operator
#include <iostream>
int main()
{
    using namespace std;
    int nights = 1001;
    int *pt = new int; // create space for an int
    * pt = 1001; // store a value there
    cout << "nights value = " << nights << " : location " << &nights << endl;
    cout << "*pt";
    cout << " value = " << *pt << " : location " << pt << endl;
    double *pd = new double; // create space for a double
    *pd = 10000001.0; // store a value there
    cout << "*pd value = " << *pd << " : location " << pd << endl;
    cout << "location of pointer pd: " << &pd << endl;
    cout << "size of pt = " << sizeof(pt);
    cout << ": size of *pt = " << sizeof(*pt) << endl;
    cout << "size of pd = " << sizeof(pd);
    cout << ": size of *pd = " << sizeof(*pd) << endl;
    delete pt; // free the memory
    delete pd;
    pt = nullptr; // make pt a null pointer
    pd = nullptr; // make pd a null pointer
    return 0;
}