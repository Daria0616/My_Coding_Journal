/*
 * 3_超过1000的第一个数
 *
 * 题目要求：
 * 计算 Σ(2n+1) 形式的累加和，在累加过程中找到第一个超过 1000 的值，
 * 输出此时的 n 与累加和 sum。
 *
 * 输入格式：
 * 无输入。
 *
 * 输出格式：
 * 输出 n=序号,sum=累加和。
 *
 * 输出样例：
 * n=31,sum=1023
 */

#include <iostream>
using namespace std;

int main()
{
    int n = 0, sum = 0;
    for (; sum <= 1000; n++)
        sum += 2 * (n + 1) + 1;
    cout << "n=" << n << "," << "sum=" << sum << endl;
    return 0;
}
