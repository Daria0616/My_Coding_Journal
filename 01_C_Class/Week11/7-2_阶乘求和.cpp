/*
 * 7-2 求 1! + 2! + ... + n!
 *
 * 题目要求：
 * 已知阶乘函数接口如下，利用该函数计算并输出 1! + 2! + ... + n!。
 *
 * 函数接口：
 * unsigned long Fact(unsigned int n);
 *
 * 参数说明：
 * n 为用户输入的正整数，函数返回 n!。
 *
 * 输入格式：
 * 输入一个正整数 n。
 *
 * 输出格式：
 * 输出 1! + 2! + ... + n! 的结果。
 *
 * 输入样例：
 * 5
 *
 * 输出样例：
 * 153
 *
 * 限制：
 * 代码长度 16 KB，时间 400 ms，内存 64 MB。
 */

#include <stdio.h>

unsigned long Fact(unsigned int n);

int main(void)
{
    unsigned int m;
    unsigned long s = 0;

    scanf("%u", &m);

    for (unsigned int i = 1; i <= m; i++)
        s += Fact(i);

    printf("%lu\n", s);
    return 0;
}

unsigned long Fact(unsigned int n)
{
    unsigned long result = 1;

    for (unsigned int i = 1; i <= n; i++)
        result *= i;

    return result;
}
