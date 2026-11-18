/*
 * 7-1 素数的和
 *
 * 题目要求：
 * 素数也称为质数，指大于 1 的整数中，只能被 1 和它本身整除的数。
 * 从键盘输入一系列大于 1 的正整数，输入 1 时表示输入结束。
 * 求这些正整数中所有素数的和。
 *
 * 输入格式：
 * 从键盘输入一系列大于 1 的正整数，输入 1 时结束。
 *
 * 输出格式：
 * 输出这些整数中所有素数的和；若一个素数也没有，输出 0。
 *
 * 输入样例：
 * 10 11 13 9 8 7 1
 *
 * 输出样例：
 * 31
 *
 * 注意：
 * 输入中可能没有素数。
 */

#include <stdio.h>

int isPrime(int n)
{
    if (n <= 1)
        return 0;

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return 0;
    }

    return 1;
}

int main(void)
{
    int num;
    int sum = 0;

    while (scanf("%d", &num) != EOF) {
        if (num == 1)
            break;

        if (isPrime(num))
            sum += num;
    }

    printf("%d\n", sum);
    return 0;
}
