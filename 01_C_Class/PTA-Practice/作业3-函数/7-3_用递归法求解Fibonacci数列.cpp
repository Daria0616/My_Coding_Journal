/*
 * 7-3 用递归法求解 Fibonacci 数列
 *
 * 题目要求：
 * 已知斐波那契数列公式：
 * F(n) = F(n-1) + F(n-2)（n > 2）；F(1)=1；F(2)=1。
 * 输入一个正整数 n，输出该整数对应的 F(n)。
 * 如果输入的 n < 1 或者 n > 50，输出 "Wrong Input!"。
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
 */

#include <stdio.h>

int F(int n)
{
    if (n < 1 || n > 50)
        return -1;

    if (n == 1 || n == 2)
        return 1;

    return F(n - 1) + F(n - 2);
}

int main(void)
{
    int n;

    if (scanf("%d", &n) != EOF) {
        int result = F(n);

        if (result != -1)
            printf("F(%d)=%d\n", n, result);
        else
            printf("Wrong Input!");
    }

    return 0;
}
