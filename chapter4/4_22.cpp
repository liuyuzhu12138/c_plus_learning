//delete.cpp -- using the delete operator
#include <iostream>
#include <cstring>
char * getname(void);
int main()
{
    char * name;
    name = getname();
    std::cout << name << " at " << (int *) name << "\n";
    delete [] name; // free the memory
    name = getname();
    std::cout << name << " at " << (int *) name << "\n";
    delete [] name; // free the memory again
    return 0;
}

char * getname(void)
{
    char temp[80];
    std::cout << "Enter last name: ";
    (std::cin.get(temp, 80)).get(); // read string into temp and consume newline
    char * pn = new char[std::strlen(temp) + 1]; // get memory
    std::strcpy(pn, temp); // copy string to new location
    return pn; // return pointer to new location
}