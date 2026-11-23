/*
 * 7-15 实验1-1改错（求三个数的平均值）
 *
 * 题目要求：改错，实现求三个数的平均值，输出 1 位小数。
 *
 * 原始错误代码：
 *   #include <stdio.h>
 *   int main()
 *   {   float a,b,c,sum;
 *       float average;
 *       a=10;  b=20;  c=35;
 *       average==sum/3;
 *       printf("the average is %4d",average);
 *       return 0;
 *   }
 *
 * 改错要点：
 * 1. 先累加求和 sum=a+b+c;
 * 2. 赋值用单等号 average=sum/3;（原代码误写 ==）。
 * 3. average 为 float，格式符用 %.1f（原代码误用 %4d）。
 *
 * 输出样例：
 * the average is 21.7
 */

#include <stdio.h>

int main()
{
    float a, b, c, sum;
    float average;

    a = 10;
    b = 20;
    c = 35;

    sum = a + b + c;
    average = sum / 3;

    printf("the average is %.1f\n", average);
    return 0;
}
