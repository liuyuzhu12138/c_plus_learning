//strtype4.cpp --line input
#include <iostream>
#include <string>
#include <cstring>
int main()
{
    using namespace std;
    char charr[20];
    
    string str;//在对象str创建时，string类的构造函数会自动为str分配内存空间，并初始化为一个空字符串。因此，在输入之前，str.size()返回0，表示字符串的长度为0。

    cout << "Length of string in charr before input: " << strlen(charr) << endl;
    cout << "Length of string in str before input: " << str.size() << endl;

    cout << "Enter a line of text:\n";
    cin.getline(charr, 20);//indicate maximum length of input 如果输入的字符串长度小于字符字符数组的大小，cin.getline()会在输入的字符串末尾自动添加一个空字符'\0'，以标志字符串的结束。这是C风格字符串的标准做法，确保字符串能够正确地被处理和输出。
    //但是，空字符之后的元素内存里会存放未知的内容，这些内容可能是之前在内存中存储的数据，或者是未初始化的垃圾值。因此，在使用strlen()函数计算字符串长度时，strlen()会从字符串的起始位置开始，逐个字符检查，直到遇到第一个空字符'\0'为止。strlen()会返回从字符串起始位置到第一个空字符之间的字符数，即字符串的长度。        
    //如果输入的字符串长度超过了字符数组的大小，cin.getline()会将输入的字符串截断，并在字符数组的末尾添加一个空字符'\0'。这意味着，如果用户输入的字符串长度超过了19个字符（因为最后一个字符用于存储空字符），cin.getline()会只读取前19个字符，并将其存储在charr中，同时在末尾添加一个空字符'\0'。剩余的输入将被丢弃，直到用户按下回车键。
    //另外，如果是初始化时直接赋值给字符数组，例如char charr[20] = "Hello";，编译器会自动在字符串末尾添加一个空字符'\0'，并将字符串存储在字符数组中。在这种情况下，strlen(charr)会返回5，因为字符串"Hello"的长度为5个字符，不包括末尾的空字符。而且在这种情况下，字符数组中的元素会被初始化为字符串的内容，剩余的元素会被自动填充为0（即空字符'\0'），因此strlen()函数能够正确地计算字符串的长度。
    cout << "You entered: " << charr << endl;
    cout << "Enter another line of text:\n";
    getline(cin, str);//no length limit
    cout << "You entered: " << str << endl;
    cout << "Length of string in charr after input: " << strlen(charr) << endl;
    cout << "Length of string in str after input: " << str.size() << endl;

    return 0;
}