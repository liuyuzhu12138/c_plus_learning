//string_version.cpp -- using std::string instead of char array
#include <iostream>
#include <string>   // 使用 string 类需要包含此头文件

int main()
{
    using namespace std;
    string name;                    // 声明 string 对象，无需指定大小
    cout << "Your first name, please: ";
    cin >> name;                    // 可以直接输入
    cout << "Here is your name, verticalized and ASCIIized:\n";
    
    // 使用下标遍历，条件为 i < name.length()
    int i = 0;
    while (i < name.length())       // name.length() 返回字符串中字符的个数,使用name.size()也可以，效果一样
    {
        cout << name[i] << ": " << int(name[i]) << endl;
        i++;
    }
    return 0;
}