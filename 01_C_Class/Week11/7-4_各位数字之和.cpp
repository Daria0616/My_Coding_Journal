/*
 * 7-4 100 以内各位数字之和
 *
 * 题目要求：
 * 读入一个整数 n（n <= 18），找出 1 到 100 中各位数字之和等于 n 的数并输出。
 *
 * 输入格式：
 * 输入一个整数 n。
 *
 * 输出格式：
 * 输出数据之间用空格隔开。
 *
 * 输入样例：
 * 15
 *
 * 输出样例：
 * 69 78 87 96
 *
 * 限制：
 * 代码长度 16 KB，时间 400 ms，内存 64 MB。
 */

#include <stdio.h>

int digitSum(int num)
{
    int sum = 0;

    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }

    return sum;
}

int main(void)
{
    int n;

    scanf("%d", &n);

    for (int i = 1; i <= 100; i++) {
        if (digitSum(i) == n)
            printf("%d ", i);
    }

    return 0;
}
