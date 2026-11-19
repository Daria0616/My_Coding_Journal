/*
 * 1_scanf和printf函数应用
 *
 * 题目要求：
 * 编写一个使用 scanf 和 printf 函数的输入输出年龄程序。
 * 用 scanf 读入一个整数年龄，再用 printf 按指定格式输出。
 *
 * 输入格式：
 * 输入一个整数 x（年龄）。
 *
 * 输出格式：
 * 输出 年龄=x。
 *
 * 输入样例：
 * 18
 *
 * 输出样例：
 * 年龄=18
 */

#include <stdio.h>

int main()
{
    int x;
    scanf("%d", &x);
    printf("年龄=%d", x);
    return 0;
}
