/*
 * 7-10 等差数列末项计算
 *
 * 题目要求：给出等差数列的前两项 a1、a2，求第 n 项。
 *
 * 输入样例：
 * 1 4 100
 * 输出样例：
 * 298
 *
 * 推导：公差 d=a2-a1，第 n 项 an=a1+(n-1)*d。
 */

#include <stdio.h>

int main()
{
    long long a1, a2, n, an;
    scanf("%lld %lld %lld", &a1, &a2, &n);

    long long d = a2 - a1;
    an = a1 + (n - 1) * d;

    printf("%lld\n", an);
    return 0;
}
