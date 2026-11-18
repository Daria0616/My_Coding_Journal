/*
 * 7-6 近似计算圆周率 π
 *
 * 题目要求：
 * 使用莱布尼茨公式近似计算圆周率 π：
 * π/4 = 1 - 1/3 + 1/5 - 1/7 + ...
 * 最后一项的绝对值小于 1e-6 时停止，π 的结果保留 8 位小数。
 *
 * 输入格式：
 * 不需要输入。
 *
 * 输出格式：
 * PI=结果，结果保留 8 位小数。
 *
 * 输出样例：
 * PI=3.14159065
 */

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    double sum = 0.0;
    double term = 1.0;
    double denominator = 1.0;
    int sign = 1;

    while (fabs(term) >= 1e-6) {
        sum += term;

        sign = -sign;
        denominator += 2.0;
        term = sign / denominator;
    }

    cout << "PI=" << fixed << setprecision(8) << sum * 4 << endl;

    return 0;
}
