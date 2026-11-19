/*
 * 4_最大公约数和最小公倍数
 *
 * 题目要求：
 * 定义 fun(m, n) 函数，用辗转相除法求 m 和 n 的最大公约数，
 * 并由 两数之积 / 最大公约数 求出最小公倍数，分别输出。
 *
 * 输入格式：
 * 输入两个正整数 m、n。
 *
 * 输出格式：
 * 第一行输出 最大公约数=值；第二行输出 最小公倍数=值。
 *
 * 输入样例：
 * 32 12
 *
 * 输出样例：
 * 最大公约数=4
 * 最小公倍数=96
 */

#include <iostream>
using namespace std;

int fun(int m, int n)
{
    int r = m % n;
    int c = m * n;
    while (r != 0)
    {
        m = n;
        n = r;
        r = m % n;
    }
    cout << "最大公约数=" << n << endl;
    cout << "最小公倍数=" << c / n << endl;
    return 0;
}

int main()
{
    int m, n;
    cin >> m >> n;
    fun(m, n);
    return 0;
}
