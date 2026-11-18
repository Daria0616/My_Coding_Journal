/*
 * 7-2 利用数列的累加和求 sinx
 *
 * 题目要求：
 * 利用公式
 * sin(x) ≈ x - x^3/3! + x^5/5! - x^7/7! + x^9/9! - ...
 * 计算 sin(x) 的值，直到最后一项的绝对值小于 1e-5 时停止。
 * 结果保留 3 位小数。
 *
 * 输入格式：
 * 直接输入 x 的数值。
 *
 * 输入样例：
 * 2
 *
 * 输出格式：
 * sin(x)=结果，结果保留 3 位小数。
 *
 * 输出样例：
 * sin(2)=0.909
 */

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    double x;
    cin >> x;

    double sinx = x;
    double term = x;

    for (int i = 1; fabs(term) >= 1e-5; i++) {
        term = -term * x * x / ((2 * i) * (2 * i + 1));
        sinx += term;
    }

    cout << "sin(" << x << ")="
         << fixed << setprecision(3) << sinx << endl;

    return 0;
}
