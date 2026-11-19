/*
 * 3_因子对
 *
 * 题目要求：
 * 输入一个正整数 n，找出它所有因子对（乘积等于 n 的一对数），
 * 输出两数之和最小的一对因子，因子1 ≤ 因子2。
 * 因子对：i 是因子时 j=n/i 是配对因子；逐对比较和，保留最小的一对。
 *
 * 输入格式：
 * 输入一个正整数 n。
 *
 * 输出格式：
 * 输出 因子1+因子2=最小和。
 *
 * 输入样例：
 * 24
 *
 * 输出样例：
 * 4+6=10
 */

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int x = 1, y = n;
    int s = 9999999;
    for (int i = 1; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            int j = n / i;
            if (s > i + j)
            {
                x = i;
                y = j;
                s = i + j;
            }
        }
    }
    cout << x << "+" << y << "=" << s << endl;
    return 0;
}
