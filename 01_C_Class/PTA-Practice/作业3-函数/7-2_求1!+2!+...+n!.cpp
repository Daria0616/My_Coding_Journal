/*
 * 7-2 求 1! + 2! + ... + n!
 *
 * 题目要求：
 * 已知求阶乘的函数如下，利用这个函数，编程计算并输出 1! + 2! + ... + n! 的值。
 * 其中 n 由用户从键盘输入。
 *
 * 函数接口定义：
 *   unsigned long Fact(unsigned int n);
 *   n 为用户输入的正整数，函数返回 n! 的值。
 *
 * 输入格式：
 * 用户从键盘输入正整数 n 的值。
 *
 * 输出格式：
 * 按输出样例的形式输出计算的结果。
 *
 * 输入样例：
 * 5
 *
 * 输出样例：
 * 153
 */

#include <stdio.h>

unsigned long Fact(unsigned int n);

int main(void)
{
    unsigned int m;
    unsigned long s = 0;
    int i;

    scanf("%u", &m);

    for (i = 1; i <= m; i++)
        s += Fact(i);

    printf("%lu\n", s);
    return 0;
}

unsigned long Fact(unsigned int n)
{
    unsigned long result = 1;
    unsigned int i;

    for (i = 1; i <= n; i++)
        result *= i;

    return result;
}
