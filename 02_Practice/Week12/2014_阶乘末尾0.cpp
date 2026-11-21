/*
 * 2014 阶乘末尾 0
 *
 * 题目要求：
 * 阶乘定义 n! = n × (n-1) × ... × 1。给出 n，计算 n! 末尾 0 的个数。
 * 例如 n=5，5! = 120，末尾有 1 个 0。
 *
 * 输入格式：
 * 输入一个正整数 n（n < 50）。
 *
 * 输出格式：
 * 输出 n! 末尾 0 的个数。
 *
 * 输入样例：
 * 5
 *
 * 输出样例：
 * 1
 *
 * 【思路】末尾 0 由因子 10=2×5 产生，阶乘中因子 2 远多于 5，
 *  所以 0 的个数等于因子 5 的个数：n/5 + n/25 + n/125 + ...，
 *  不断把 n 除以 5 并累加即可。
 */

#include <iostream>
using namespace std;

int countFactorialZero(int n)
{
    int count = 0;
    while (n > 0) {
        n = n / 5;
        count += n;
    }
    return count;
}

int main()
{
    int n;
    cin >> n;
    cout << countFactorialZero(n) << endl;
    return 0;
}
