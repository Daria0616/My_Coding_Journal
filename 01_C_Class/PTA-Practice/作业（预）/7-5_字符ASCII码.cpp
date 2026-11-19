/*
 * 7-5 用户输入一个字符，程序输出其 ASCII 码和其对应的字符
 *
 * 题目要求：输入一个字符，输出其 ASCII 码和对应字符。
 *
 * 输入格式：输入一个字符。
 * 输出格式：?? 的 ASCII 为 ??
 *
 * 输入样例：
 * 2
 * 输出样例：
 * 输入一个字符: 2 的 ASCII 为 50
 */

#include <stdio.h>

int main()
{
    char c;
    scanf("%c", &c);
    printf("输入一个字符: %c 的 ASCII 为 %d", c, c);
    return 0;
}
