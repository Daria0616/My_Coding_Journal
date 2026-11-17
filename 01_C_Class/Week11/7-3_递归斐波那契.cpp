/*
 * 7-3 用递归法求解 Fibonacci 数列
 *
 * 题目要求：
 * 已知 F(1)=1，F(2)=1，F(n)=F(n-1)+F(n-2)（n>2）。
 * 输入一个整数 n，输出该整数对应的 F(n)。
 * 如果 n<1 或 n>50，输出 Wrong Input!。
 *
 * 输入格式：
 * 输入一个正整数 n（1 <= n <= 50）。
 *
 * 输出格式：
 * 输出 F(n) 的值，格式为 F(n)=结果。
 *
 * 输入样例 1：
 * 2
 *
 * 输出样例 1：
 * F(2)=1
 *
 * 输入样例 2：
 * 3
 *
 * 输出样例 2：
 * F(3)=2
 *
 * 输入样例 3：
 * -7
 *
 * 输出样例 3：
 * Wrong Input!
 *
 * 说明：
 * 使用带记忆化的递归，避免 n=50 时重复计算导致超时。
 */

#include <stdio.h>

#define MAX_N 50

static unsigned long long memo[MAX_N + 1];

unsigned long long Fibonacci(int n)
{
    if (n == 1 || n == 2)
        return 1;

    if (memo[n] != 0)
        return memo[n];

    memo[n] = Fibonacci(n - 1) + Fibonacci(n - 2);
    return memo[n];
}

int main(void)
{
    int n;

    scanf("%d", &n);

    if (n < 1 || n > 50) {
        printf("Wrong Input!\n");
        return 0;
    }

    printf("F(%d)=%llu\n", n, Fibonacci(n));
    return 0;
}
