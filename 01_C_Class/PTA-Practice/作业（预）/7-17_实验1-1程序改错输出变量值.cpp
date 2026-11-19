/*
 * 7-17 C 程序设计 实验1-1程序改错
 *
 * 题目要求：变量 x、y、z 赋初值 2.5，在屏幕上打印这些变量的值，
 * 每个变量占一行，保留两位小数。
 *
 * 原始错误代码：
 *   #include <stdio.h>
 *   int main()
 *   {
 *       int x=y=2.5;
 *       printf("These values are:\n");
 *       printf("x=%d\n",x);
 *       printf("y=%d\n",y);
 *       printf("z=%d\n",z);
 *       return 0;
 *   }
 *
 * 改错要点：
 * 1. 2.5 是小数，变量应为 float，且 x、y、z 需分别定义。
 * 2. 连赋初值 x=y=z=2.5;；输出格式符 %.2f。
 *
 * 输出样例：
 * These values are:
 * x=2.50
 * y=2.50
 * z=2.50
 */

#include <stdio.h>

int main()
{
    float x, y, z;
    x = y = z = 2.5;

    printf("These values are:\n");
    printf("x=%.2f\n", x);
    printf("y=%.2f\n", y);
    printf("z=%.2f\n", z);
    return 0;
}
