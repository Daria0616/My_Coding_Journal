/*
 * 7-3 求解分数数列前 20 项之和
 *
 * 题目要求：
 * 已知分数序列：
 * 1/2，2/3，3/5，5/8，8/13，13/21，...
 * 求这个序列前 20 项之和。
 *
 * 输入格式：
 * 不需要输入。
 *
 * 输出格式：
 * sum=结果，结果保留 4 位小数。
 *
 * 输出样例：
 * sum=12.2783
 *
 * 限制：
 * 代码长度 16 KB，时间 400 ms，内存 64 MB。
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double sum = 0.0;
    double a = 1.0;
    double b = 2.0;

    for (int i = 1; i <= 20; i++) {
        sum += a / b;

        double nextA = b;
        double nextB = a + b;
        a = nextA;
        b = nextB;
    }

    cout << fixed << setprecision(4) << "sum=" << sum << endl;

    return 0;
}
