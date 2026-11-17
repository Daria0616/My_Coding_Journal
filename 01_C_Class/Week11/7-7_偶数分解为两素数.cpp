/*
 * 7-7 验证偶数可以表示为两个素数之和
 *
 * 题目要求：
 * 利用 isprime(int num) 函数，验证任意一个大于 2 的偶数可以表示为两个素数之和，
 * 并输出所有情况。
 *
 * 输入格式：
 * 输入一个偶数 n。
 *
 * 输出格式：
 * 按 n=素数+素数 的形式输出，每行一种情况。
 * 为避免重复，只输出第一个素数小于或等于第二个素数的情况。
 *
 * 输入样例：
 * 16
 *
 * 输出样例：
 * 16=3+13
 * 16=5+11
 *
 * 限制：
 * 代码长度 16 KB，时间 400 ms，内存 64 MB。
 */

#include <stdio.h>

int isprime(int num)
{
    if (num <= 1)
        return 0;

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return 0;
    }

    return 1;
}

int main(void)
{
    int n;

    scanf("%d", &n);

    for (int i = 2; i <= n / 2; i++) {
        if (isprime(i) && isprime(n - i))
            printf("%d=%d+%d\n", n, i, n - i);
    }

    return 0;
}
