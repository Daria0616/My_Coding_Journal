/*
 * 2_求最大值
 *
 * 题目要求：
 * 输入三个整数 a、b、c，求出并输出其中的最大数。
 * 先比较 a、b 得较大者存入 max，再用 c 与 max 比较更新。
 *
 * 输入格式：
 * 输入三个整数，由空格分隔。
 *
 * 输出格式：
 * 输出 最大值=最大数。
 *
 * 输入样例：
 * 4 91 51
 *
 * 输出样例：
 * 最大值=91
 */

#include <iostream>
using namespace std;

int main()
{
    int a, b, c, max;
    cin >> a >> b >> c;
    if (a > b)
        max = a;
    else
        max = b;
    if (c > max)
        max = c;
    cout << "最大值=" << max << endl;
    return 0;
}
