/*
 * 7-9 计算长方形的周长和面积
 *
 * 题目要求：输入长方形的长和宽，计算周长和面积。
 *
 * 输入格式：在一行中给出两个整数（<=10^5）。
 * 输出格式：第一行周长，第二行面积。
 *
 * 输入样例：
 * 6 8
 * 输出样例：
 * 周长 = 28
 * 面积 = 48
 */

#include <stdio.h>

int main()
{
    long long a, b;
    scanf("%lld %lld", &a, &b);

    printf("周长 = %lld\n", 2 * (a + b));
    printf("面积 = %lld\n", a * b);
    return 0;
}
