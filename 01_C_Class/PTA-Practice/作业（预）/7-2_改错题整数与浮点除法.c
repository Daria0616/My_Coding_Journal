/*
 * 7-2 改错题：修改以下程序，得到正确结果
 *
 * 题目要求：修改程序，使得到正确运行结果。无需输入数据。
 *
 * 原始错误代码：
 *   #include <stdio.h>
 *   int main( )
 *   {
 *       int a=7,b=2;
 *       float y1,y2;
 *       y1=a/b;
 *       y2=a%b;
 *       printf("y1=%f,y2=%f",y1,y2);
 *       return 0;
 *   }
 *
 * 改错要点：
 * 1. y1 为整数除法 7/2=3；y2 应为浮点除法，需先把操作数转为 float：(float)a/b。
 * 2. 输出保留 2 位小数，格式符用 %.2f。
 *
 * 输出样例：
 * y1=3.00,y2=3.50
 */

#include <stdio.h>

int main()
{
    int a = 7, b = 2;
    float y1, y2;

    y1 = a / b;
    y2 = (float)a / b;

    printf("y1=%.2f,y2=%.2f", y1, y2);
    return 0;
}
