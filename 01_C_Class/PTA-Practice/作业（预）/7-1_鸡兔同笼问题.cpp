/*
 * 7-1 鸡兔同笼问题
 *
 * 题目要求：
 * 给定鸡和兔两种动物的总头数和总腿数，计算鸡和兔分别有多少只。
 * 提示：两个数字均为偶数，且总腿数大于总头数的 2 倍。
 * （题面原要求创建类 Compute，含 protected 成员 head、leg 和 public 成员函数 key()；
 *   平台实际以 C 语言 main 函数提交，这里按通过的 C 写法整理。）
 *
 * 输入格式：
 * 输入总头数和总腿数。
 *
 * 输出格式：
 * 输出鸡和兔分别有多少只。
 *
 * 输入样例：
 * 20 60
 * 输出样例：
 * The number of hens is 10.
 * The number of rabbits is 10.
 *
 * 推导：设鸡 x 只、兔 y 只，x+y=head，2x+4y=leg，
 *       则 x=(4*head-leg)/2，y=head-x。
 */

#include <stdio.h>

int main()
{
    int head, leg;
    scanf("%d %d", &head, &leg);

    int hens = (4 * head - leg) / 2;
    int rabbits = head - hens;

    printf("The number of hens is %d.\n", hens);
    printf("The number of rabbits is %d.\n", rabbits);
    return 0;
}
