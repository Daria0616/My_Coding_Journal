/*
 * 7-14 输出指定范围内的素数
 *
 * 题目要求：输入两个大于 1 的正整数 A、B（A<B），输出两数范围内的所有素数。
 *
 * 输入样例：
 * 2 10
 * 输出样例：
 * 2,3,5,7
 */

#include <stdio.h>

int isPrime(int n)
{
    if (n < 2) return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int main()
{
    int A, B, first = 1;
    scanf("%d %d", &A, &B);

    for (int i = A; i <= B; i++) {
        if (isPrime(i)) {
            if (first) {
                printf("%d", i);
                first = 0;
            } else {
                printf(",%d", i);
            }
        }
    }
    return 0;
}
