//pointer.cpp -- our first pointer variable
#include <iostream>
int main()
{
    int updates = 6; // an ordinary integer variable
    int* p_updates;   // a pointer to an integer

    p_updates = &updates; // assign the address of updates to p_updates

    std::cout << "Value: updates = " << updates << ", *p_updates = " << * p_updates << std::endl;
    std::cout << "Addresses: &updates = " << &updates << ", p_updates = " << p_updates << std::endl;

    * p_updates = * p_updates + 1; // increment updates using the pointer
    std::cout << "Now updates = " << updates << std::endl;

    return 0;
}