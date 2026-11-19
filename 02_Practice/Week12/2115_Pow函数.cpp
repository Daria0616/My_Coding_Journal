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
 * 错题复盘（评测 2 次）：首次提交 10 组中 9 组不匹配。
 *
 * 【错误代码（首次提交，主程序）】
 *   int n;
 *   double x;
 *   cout << fixed << setprecision(10) << pow(x, n) << endl;
 *
 * 【错因】漏写读入语句 `cin >> x >> n;`，x、n 未初始化就参与 pow 计算，
 *  结果取自随机值。
 * 【修正】先读入 x、n 再调用 pow(x, n)，即下方代码。
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
