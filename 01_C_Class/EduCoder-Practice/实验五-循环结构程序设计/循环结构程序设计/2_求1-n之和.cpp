/*
 * 2_求1-n之和
 *
 * 题目要求：
 * 输入 n，利用循环计算 1+2+3+……+n 的累加和并输出。
 *
 * 输入格式：
 * 输入一个整数 n。
 *
 * 输出格式：
 * 输出 1+2+3+……+n=累加和。
 *
 * 输入样例：
 * 100
 *
 * 输出样例：
 * 1+2+3+……+n=5050
 */

#include <iostream>
using namespace std;

int main()
{
    int n, s; // 累加求和存储到 s
    cin >> n;
    s = 0;
    while (n > 0)
    {
        s += n;
        n--;
    }
    cout << "1+2+3+……+n=" << s << endl;
    return 0;
}
