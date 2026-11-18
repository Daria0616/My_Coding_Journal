/*
 * 7-5 友好数
 *
 * 题目要求：
 * 有两个整数，如果每个整数的约数和（除了它本身以外）等于对方，
 * 就称这对数是友好的。例如：284 的约数和为 220，220 的约数和为 284，
 * 所以它们是友好的。编写程序判断两个数是否是友好数。
 *
 * 输入格式：
 * 一行，两个整数，由空格分隔（两个整数都小于 1000000）。
 *
 * 输出格式：
 * 如果是友好数，输出 "yes"；否则输出 "no"，注意不包含引号。
 *
 * 输入样例：
 * 220 284
 *
 * 输出样例：
 * yes
 */

#include <stdio.h>

int getSum(int n)
{
    if (n <= 1)
        return 0;

    int sum = 1;

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            sum += i;

            if (i != n / i)
                sum += n / i;
        }
    }

    return sum;
}

int main(void)
{
    int a, b;
    scanf("%d %d", &a, &b);

    if (getSum(a) == b && getSum(b) == a)
        printf("yes");
    else
        printf("no");

    return 0;
}
