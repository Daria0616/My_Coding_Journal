/*
 * 7-1 指定日期是该年的第几天
 *
 * 题目要求：
 * 编写一个能计算指定日期是该年第几天的程序：
 * 1. 按月累加天数；
 * 2. 判断是否为闰年。
 *
 * 输入格式：
 * 年 月 日
 *
 * 输入样例：
 * 2026 10 25
 *
 * 输出格式：
 * 某年某月某日是该年的第某天。
 *
 * 输出样例：
 * 2026年10月25日是该年的第298天。
 *
 * 说明：
 * 闰年判断规则：能被 4 整除但不能被 100 整除，或者能被 400 整除。
 */

#include <iostream>
using namespace std;

int main()
{
    int year, month, day, sum = 0;
    cin >> year >> month >> day;

    switch (month - 1) {
        case 11: sum += 30;
        case 10: sum += 31;
        case  9: sum += 30;
        case  8: sum += 31;
        case  7: sum += 31;
        case  6: sum += 30;
        case  5: sum += 31;
        case  4: sum += 30;
        case  3: sum += 31;
        case  2:
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
                sum += 29;
            else
                sum += 28;
        case  1: sum += 31;
        case  0: break;
    }

    sum += day;
    cout << year << "年" << month << "月" << day << "日"
         << "是该年的第" << sum << "天。" << endl;

    return 0;
}
