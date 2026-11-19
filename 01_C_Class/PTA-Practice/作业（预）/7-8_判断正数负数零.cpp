/*
 * 7-8 用户输入一个数字，判断该数字是正数还是负数或是零
 *
 * 题目要求：输入一个数字，判断是正数、负数还是零。
 *
 * 输入样例：
 * 0
 * 输出样例：
 * 输入一个数字: 你输入的是 0。
 */

#include <stdio.h>

int main()
{
    double n;
    printf("输入一个数字: ");
    scanf("%lf", &n);

    if (n > 0) {
        printf("你输入的是正数。\n");
    } else if (n < 0) {
        printf("你输入的是负数。\n");
    } else {
        printf("你输入的是 0。\n");
    }
    return 0;
}
