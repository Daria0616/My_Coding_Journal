/*
 * 7-4 编程题：条件运算符求较小值与较大值
 *
 * 题目要求：
 * 定义 4 个整型变量 a、b、c、d，将 a、b 中的较小者赋给 c，
 * 较大者赋给 d，输出 c、d 的值。（使用条件运算符）
 *
 * 输入样例：
 * 3,4
 * 输出样例：
 * c=3,d=4
 */

#include <stdio.h>

int main()
{
    int a, b, c, d;
    scanf("%d,%d", &a, &b);

    c = a < b ? a : b;
    d = a > b ? a : b;

    printf("c=%d,d=%d", c, d);
    return 0;
}
