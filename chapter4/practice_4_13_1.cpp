// Create by Shujia Huang on 2021-07-25
#include <iostream>


int main() {
    std::string first_name, last_name, grade_letter;
    int age;

    std::cout << "What is your first name: ";
    getline(std::cin, first_name);

    std::cout << "What is your last name: ";
    getline(std::cin, last_name);

    std::cout << "What letter grade do you deserve: ";
    getline(std::cin, grade_letter);

    std::cout << "What is your age: ";
    std::cin >> age;
    std::cin.get(); // 读取掉输入年龄后残留在输入缓冲区的换行符

    std::cout << "Name: " << last_name << ", " << first_name << std::endl;
    std::cout << "Grade: " << static_cast<char>(grade_letter[0] + 1)<< "\n";
    //char(grade_letter[0] + 1)，grade_letter[0]就是string的第一个字符的指针，grade_letter[0]里就是一个char字符，和1相加，触发隐式转换向int对齐，然后，char()强制转换为char.我改成static_cast<char>(grade_letter[0] + 1)更好
    // std::stoi() 将字符串转换为整数,还有std::stod() 将字符串转换为双精度浮点数,以及std::stol() 将字符串转换为长整数等函数，其他还有std::stoul() 将字符串转换为无符号长整数，std::stoll() 将字符串转换为长长整数，std::stoull() 将字符串转换为无符号长长整数等函数。请自行查阅。
    std::cout << "Age: " << age << std::endl;

    return 0;
}