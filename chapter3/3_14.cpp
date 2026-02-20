//typecast.cpp -- focing type changes
#include <iostream>
int main()
{
    using namespace std;
    int auks, bats, coots;
    auks = 19.99 + 11.99; // ok: conversion from double to int
    bats = (int) 19.99 + (int) 11.99; // ok: conversion from double to int
    coots = int(19.99) + int(11.99); // ok: conversion from double to int
    cout << "auks = " << auks << ", bats = " << bats;
    cout << ", coots = " << coots << endl;

    char ch = 'Z';
    cout << "The code for " << ch << " is " << int(ch) << endl;
    cout << "Yes, the code is " << static_cast<int>(ch) << endl;
    return 0;
}