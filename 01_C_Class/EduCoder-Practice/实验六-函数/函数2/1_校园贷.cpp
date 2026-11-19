/*
 * 1_校园贷
 *
 * 题目要求：
 * 有一种“校园贷”，贷款 10000 元，签订 n 个月的偿还期限，日利率为千分之八（0.008）。
 * 用函数实现：n 个月（每月按 30 天计算）后需要还款多少元。
 * 不计算复利，每天都按千分之八计算利息。n 是大于 0 的整数。
 *
 * 函数接口：
 * double RePay(int month)：返回 n 个月后应还的总金额（本金 + 利息）。
 *
 * 输入格式：
 * 输入一个正整数 n（借款月数）。
 *
 * 输出格式：
 * 输出应还总金额，格式为 return=金额。
 *
 * 输入样例：
 * 8
 *
 * 输出样例：
 * return=29200
 *
 * 说明：
 * 利息 = 10000 × 0.008 × 30 × n；总金额 = 本金 10000 + 利息。
 * 例：n=8 时，利息 = 10000×0.008×30×8 = 19200，总金额 = 29200。
 */

#include <iostream>
using namespace std;

double RePay(int month)
{
    double interest = 10000 * 0.008 * 30 * month;
    return interest + 10000;
}

int main()
{
    int month;
    cin >> month;
    cout << "return=" << RePay(month) << endl;
    return 0;
}
