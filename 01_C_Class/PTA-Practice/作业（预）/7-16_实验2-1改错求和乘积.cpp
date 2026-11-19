/*
 * 7-16 实验2-1改错
 *
 * 题目要求：输入 a、b、c 三个数，输出 a+b+c 与 a*b*c，各保留 6 位小数。
 *
 * 原始错误代码：
 *   #include <stdio.h>
 *   void main()
 *   {int a,b,ab,ac,c;
 *    scanf("%d,%d,%f",&a,&b,&c);
 *    ab=a+b;
 *    ac=ac;
 *    printf("a+b+c=%d\n",&ab+c);
 *    printf("abc=%d\n",&acb)；
 *   }
 *
 * 改错要点：
 * 1. 三个数均为 float；scanf 格式符 %f 且参数取地址。
 * 2. ac 应为 a*c；乘积输出 ac*b；去掉多余取地址符 &。
 * 3. 输出 %.6f 保留 6 位小数。
 *
 * 输入样例：
 * 5,3,6
 * 输出样例：
 * a+b+c=14.000000
 * a*b*c=90.000000
 */

#include <stdio.h>

int main()
{
    float a, b, ab, ac, c;
    scanf("%f,%f,%f", &a, &b, &c);

    ab = a + b;
    ac = a * c;

    printf("a+b+c=%.6f\n", ab + c);
    printf("a*b*c=%.6f\n", ac * b);
    return 0;
}
