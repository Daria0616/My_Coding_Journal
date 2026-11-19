/*
 * 4_数列之和
 *
 * 题目要求：
 * 求数列 2/3、4/5、6/9、10/15、16/25 …… 前 n 项之和（n≤100）。
 * 规律：当前项为 fenzi/fenmu；下一项分子 = 当前分母 + 1，下一项分母 = 当前分子 + 当前分母。
 * 必须用 double，避免整数除法截断小数。
 *
 * 输入格式：
 * 输入项数 n。
 *
 * 输出格式：
 * 输出前 n 项之和。
 *
 * 输入样例：
 * 30
 *
 * 输出样例：
 * 18.9307
 */

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    double fenzi = 2, fenmu = 3, sum = 0;
    for (int i = 1; i <= n; i++)
    {
        double f, t;
        f = fenzi / fenmu;
        t = fenzi;
        fenzi = fenmu + 1;
        fenmu = t + fenmu;
        sum += f;
    }
    cout << sum << endl;
    return 0;
}
