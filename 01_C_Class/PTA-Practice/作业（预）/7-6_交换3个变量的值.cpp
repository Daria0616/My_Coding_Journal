/*
 * 7-6 BC1.2、交换 3 个变量的值
 *
 * 题目要求：
 * 从键盘输入 3 个变量的值，将这 3 个变量的值循环交换。
 * 例如输入 a=5, b=6, c=7，交换后 a=6, b=7, c=5。
 *
 * 输入样例：
 * 18,37,94
 * 输出样例：
 * 37,94,18
 */

#include <stdio.h>

int main()
{
    int a, b, c, t;
    scanf("%d,%d,%d", &a, &b, &c);

    t = a;
    a = b;
    b = c;
    c = t;

    printf("%d,%d,%d", a, b, c);
    return 0;
}
