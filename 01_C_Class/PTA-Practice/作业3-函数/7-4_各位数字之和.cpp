/*
 * 7-4 函数编程题（100 以内各位数字之和）
 *
 * 题目要求：
 * 输出 100 范围以内每位数之和等于给定值的数据。
 * 读入 1 个整数 n（n <= 18），从 1 到 100 以内的数据里找出
 * 每位数之和等于 n 的数据并输出。
 *
 * 输入格式：
 * 输入在一行中给出 1 个整数 n。
 *
 * 输出格式：
 * 输出数据以空格隔开。
 *
 * 输入样例：
 * 15
 *
 * 输出样例：
 * 69 78 87 96
 */

#include <stdio.h>

int sum(int num)
{
    int sum = 0;

    while (num > 0) {
        sum += num % 10;
        num = num / 10;
    }

    return sum;
}

int main(void)
{
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= 100; i++)
        if (sum(i) == n)
            printf("%d ", i);

    return 0;
}
