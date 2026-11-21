/*
 * 2115 Pow 函数
 *
 * 题目要求：
 * 计算 x 的 n 次方。x 类型为 double，n 类型为 int。
 *
 * 输入格式：
 * 给定输入 x、n。
 *
 * 输出格式：
 * 输出 x 的 n 次方结果，保留小数点后 10 位。
 *
 * 输入样例：
 * 0.2 5
 *
 * 输出样例：
 * 0.0003200000
 *
 * 【思路】使用 pow 函数计算 x 的 n 次方，使用 setprecision 设置输出精度。
 */

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    int n;
    double x;
    cin >> x >> n;
    cout << fixed << setprecision(10) << pow(x, n) << endl;
    return 0;
}
