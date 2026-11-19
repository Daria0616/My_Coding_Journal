/*
 * 2_完数
 *
 * 题目要求：
 * 输入 n（1~1000），找出 n 以内的所有完数。
 * 完数：除自身外所有真因子之和等于它本身，如 6=1+2+3。
 *
 * 输入格式：
 * 输入一个整数 n。
 *
 * 输出格式：
 * 每行输出一个 n 以内的完数。
 *
 * 输入样例：
 * 100
 *
 * 输出样例：
 * 6
 * 28
 */

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i < n; i++)
    {
        int s = 0;
        for (int j = 1; j < i; j++)
        {
            if (i % j == 0)
                s += j;
        }
        if (s == i)
            cout << i << endl;
    }
    return 0;
}
