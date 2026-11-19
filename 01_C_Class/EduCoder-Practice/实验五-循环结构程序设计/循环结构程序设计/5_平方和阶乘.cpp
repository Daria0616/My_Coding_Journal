/*
 * 5_平方和，阶乘
 *
 * 题目要求：
 * (1) 计算并输出 1²+2²+3²+……+100²；
 * (2) 输入 n，计算并输出 n!（1*2*3*...*n）。
 *
 * 输入格式：
 * 第二部分输入一个整数 n。
 *
 * 输出格式：
 * 第一行输出 1² 到 100² 的平方和；第二行输出 n!=阶乘值。
 *
 * 测试样例：
 * 平方和输出 338350；输入 5 输出 5!=120
 */

#include <iostream>
using namespace std;

int main()
{
    int i = 1, s = 0;
    for (i = 1; i <= 100; i++)
    {
        s += i * i;
    }
    cout << s << endl;

    int n;
    double sum; // n! 计算结果保存到 sum
    sum = 1;
    cin >> n;
    for (i = 1; i <= n; i++)
        sum *= i;
    cout << n << "!=" << sum << endl;
    return 0;
}
