/*
 * 6_分数序列之和
 *
 * 题目要求：
 * 计算分数序列 1/2，2/3，3/5，5/8，8/13，13/21 ... 前 n 项之和。
 * 规律：后一项的分子是前一项的分母，后一项的分母是前一项分子与分母之和。
 *
 * 输入格式：
 * 输入项数 n。
 *
 * 输出格式：
 * 输出 sum=前 n 项之和。
 *
 * 输入样例：
 * 20
 *
 * 输出样例：
 * sum=12.2783
 */

#include <iostream>
using namespace std;

int main()
{
    int n;
    float x, fenzi, fenmu, sum;
    cin >> n;
    fenzi = 1;
    fenmu = 2;
    sum = 0;
    int i;
    for (i = 1; i <= n; i++)
    {
        sum = sum + fenzi / fenmu;
        x = fenmu;
        fenmu = fenzi + fenmu;
        fenzi = x;
    }
    cout << "sum=" << sum << endl;
    return 0;
}
