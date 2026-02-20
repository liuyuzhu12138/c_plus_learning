// 3.7.4
#include <iostream>
const int turn_numb = 60;//六十进制转换的基数，60分钟=1小时，60秒=1分钟
const int day2hour = 24;//一天的小时数
int main() {

    long total_seconds = 0;

    std::cout << "Enter the number of seconds: ";
    std::cin >> total_seconds;

    int days = total_seconds / (day2hour * turn_numb * turn_numb);//int类型的除法会自动向下取整，所以这里的结果是一个整数，表示完整的天数。
    int hours = (total_seconds %  (day2hour * turn_numb * turn_numb)) / (turn_numb * turn_numb);
    int minutes = ((total_seconds %  (day2hour * turn_numb * turn_numb)) % (turn_numb * turn_numb)) / turn_numb;
    int seconds = ((total_seconds %  (day2hour * turn_numb * turn_numb)) % (turn_numb * turn_numb)) % turn_numb;

    std::cout << total_seconds << " seconds = " 
         << days << " days, " 
         << hours << " hours, "
         << minutes << " minutes, "
         << seconds << " seconds." << std::endl;

    return 0;
}