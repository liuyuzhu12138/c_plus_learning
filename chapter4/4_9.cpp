//strtype3.cpp  -- more string class features
#include <iostream>
#include <cstring>
#include <cstring>
int main()
{
    using namespace std;
    char charr1[20]= "hhvjvjgvjhuhhbuhb";
    char charr2[20] = "jaguar";
    string str1;
    string str2 = "panther";

    str1 = str2;  // copy str2 to str1
    strcpy(charr1, charr2);  // copy charr2 to charr1

    str1 += " paste";  // add " paste" to str1
    strcat(charr1, " juice");  // add " juice" to charr1

    int len1 = str1.size();  // get length of str1
    int len2 = strlen(charr1);  // get length of charr1

    cout << "The string " << str1 << " contains "
         << len1 << " characters.\n";
    cout << "The string " << charr1 << " contains "
         << len2 << " characters.\n";

    return 0;
}