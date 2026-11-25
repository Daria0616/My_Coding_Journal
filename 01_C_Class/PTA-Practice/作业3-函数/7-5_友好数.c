/*
 * 7-5 友好数
 *
 * 题目要求：
 * 如果两个整数的真因子之和（不包括它本身）分别等于对方，则称这对数是友好数。
 * 例如 220 的真因子之和为 284，284 的真因子之和为 220，所以它们是友好数。
 * 编写程序判断输入的两个数是否是友好数。
 *
 * 输入格式：
 * 一行输入两个整数，由空格分隔，两个整数都小于 1000000。
 *
 * 输出格式：
 * 如果是友好数，输出 yes；否则输出 no（不包含引号）。
 *
 * 输入样例：
 * 220 284
 *
 * 输出样例：
 * yes
 */

#include <stdio.h>

int properDivisorSum(int n)
{
    if (n <= 1)
        return 0;

    int sum = 1;

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            sum += i;

            if (i != n / i)           //避免重复加上平方根
                sum += n / i;
        }
    }

    return sum;
}

int main(void)
{
    int a, b;

    scanf("%d %d", &a, &b);

    if (properDivisorSum(a) == b && properDivisorSum(b) == a)
        printf("yes\n");
    else
        printf("no\n");

    return 0;
}
