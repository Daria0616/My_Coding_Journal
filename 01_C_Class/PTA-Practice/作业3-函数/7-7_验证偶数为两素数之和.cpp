/*
 * 7-7 编写函数，验证大于 2 的偶数为两素数之和并输出该素数
 *
 * 题目要求：
 * 利用上一题 isprime(int num) 函数，并编写完整函数，
 * 验证任意偶数为两素数之和，并输出所有情况。
 *
 * 输入格式：
 * 请输入一个偶数。
 *
 * 输出格式：
 * 偶数=两个素数之和，列出所有情况。
 *
 * 输入样例：
 * 16
 *
 * 输出样例：
 * 16=3+13
 * 16=5+11
 */

#include <stdio.h>
#include <math.h>

int isprime(int num)
{
    if (num <= 1)
        return 0;

    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0)
            return 0;
    }

    return 1;
}

int main(void)
{
    int n;
    scanf("%d", &n);

    for (int i = 2; i <= n / 2; i++)
        if (isprime(i) && isprime(n - i))
            printf("%d=%d+%d\n", n, i, n - i);

    return 0;
}
