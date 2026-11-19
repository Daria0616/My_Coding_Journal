/*
 * 6_第几天
 *
 * 题目要求：
 * 输入年、月、日，计算并输出该日期是当年的第几天。
 * 借助 switch 穿透：按 month-1 从当月前一月起向下累加前面各月天数，
 * 最后再加 day；2 月需先判断闰年（能被 400 整除，或能被 4 整除但不能被 100 整除）。
 *
 * 输入格式：
 * 输入三个整数 year、month、day，由空格分隔。
 *
 * 输出格式：
 * 输出 sum=第几天。
 *
 * 输入样例：
 * 2026 9 1
 *
 * 输出样例：
 * sum=244
 *
 * 错题复盘（评测 2 次）：
 * 第一次提交“共有 3 组测试集，其中有 3 组测试结果不匹配”。
 * 初版用 switch 按月份累加前序天数，月份索引与各月天数配对、闰年 2 月分支在
 * 月初 / 闰年测试集上对不上；整理为 month-1 穿透累加并核对每月天数与闰年判断后通过。
 * 提交记录截图：../../images/4212808-6_第几天_提交记录.png
 */

#include <iostream>
using namespace std;

int main()
{
    int year, month, day, sum = 0; // sum 表示第几天
    cin >> year >> month >> day;
    switch (month - 1)
    {
        case 11: sum += 30;
        case 10: sum += 31;
        case 9:  sum += 30;
        case 8:  sum += 31;
        case 7:  sum += 31;
        case 6:  sum += 30;
        case 5:  sum += 31;
        case 4:  sum += 30;
        case 3:  sum += 31;
        case 2:
            if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
                sum += 29;
            else
                sum += 28;
        case 1: sum += 31;
        case 0: break;
    }
    sum += day;
    cout << "sum=" << sum << endl;
    return 0;
}
