/*
 * 7-6 编写程序用递归算法求 n!
 *
 * 题目要求：
 * 编写程序用递归算法求 n!。为了保证 n! 数值不溢出，结果定义为 double 类型。
 *
 * 输入格式：
 * 输入一个 int 类型数据，即正整数 n。
 *
 * 输出格式：
 * 输出一个 double 类型数据，即 n! 的数值，格式为 %.1f\n。
 *
 * 输入样例：
 * 5
 *
 * 输出样例：
 * 120.0
 *
 * 限制：
 * 代码长度 16 KB，时间 400 ms，内存 64 MB。
 */

#include <stdio.h>

double fact(int n)
{
    if (n == 0 || n == 1)
        return 1.0;

    return n * fact(n - 1);
}

int main(void)
{
    int n;

    scanf("%d", &n);
    printf("%.1f\n", fact(n));

    return 0;
}
