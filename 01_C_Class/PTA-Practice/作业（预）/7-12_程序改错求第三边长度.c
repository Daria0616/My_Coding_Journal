/*
 * 7-12 程序改错：求第三边的长度
 *
 * 题目要求：已知三角形两条边的长度和夹角（单位为度），求第三条边长度。
 * 圆周率近似值取 3.141592653589793。输出保留两位小数，最后换行。
 *
 * 原始错误代码：
 *   #include <stdio.h>
 *   int main(void);
 *   {int a,b,c,t;
 *    scanf("%d%d%d",a,b,t);
 *    c=sqrt(a^2+b^2-2abcost);
 *    printf("length=%d\n",c)
 *    return 0;
 *   }
 *
 * 改错要点：
 * 1. 余弦定理 c=sqrt(a²+b²-2ab·cos(夹角))；C 中平方用 a*a，不能用 ^。
 * 2. 夹角为角度，需先转弧度：rad=t*π/180。
 * 3. 边长用 double，scanf 取地址，输出 %.2f。
 *
 * 输入样例：
 * 1 2 60
 * 输出样例：
 * length=1.73
 */

#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c, t;
    scanf("%lf%lf%lf", &a, &b, &t);

    double rad = t * 3.141592653589793 / 180.0;
    c = sqrt(a * a + b * b - 2 * a * b * cos(rad));

    printf("length=%.2f\n", c);
    return 0;
}
