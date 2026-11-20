/*
 * P5739 【深基7.例7】计算阶乘
 *
 * 题目要求：
 * 求 n!，即 1 × 2 × 3 ⋯ × n。挑战：不使用循环语句（for、while）完成，
 * 用递归实现。
 *
 * 输入格式：
 * 第一行输入一个正整数 n。
 *
 * 输出格式：
 * 输出一个正整数，表示 n!。
 *
 * 输入样例：
 * 3
 *
 * 输出样例：
 * 6
 *
 * 数据范围：1 ≤ n ≤ 12。
 * 本关一次评测通过，无失败记录。
 */

#include <iostream>
using namespace std;

int Fact(int n)
{
    if (n == 1|| n == 0)
        return 1;
    else {
        int c;
        c = n * Fact(n - 1);
        return c;
    }
}

int main()
{
    int n, fn;
    cin >> n;
    fn = Fact(n);
    cout << fn << endl;

    return 0;
}
