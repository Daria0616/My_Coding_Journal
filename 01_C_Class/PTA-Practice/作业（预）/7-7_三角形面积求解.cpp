/*
 * 7-7 BC1.5、三角形面积求解
 *
 * 题目要求：从键盘输入三角形的三条边长，求解该三角形的面积。
 * 三边满足任意两边之和大于第三边。
 * 面积公式 sqrt(s(s-a)(s-b)(s-c))，s=(a+b+c)/2。
 *
 * 输入样例：
 * 3,4,5
 * 输出样例：
 * 6.000000
 */

#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, s, area;
    scanf("%f,%f,%f", &a, &b, &c);

    s = (a + b + c) / 2;
    area = sqrt(s * (s - a) * (s - b) * (s - c));

    printf("%.6f\n", area);
    return 0;
}
