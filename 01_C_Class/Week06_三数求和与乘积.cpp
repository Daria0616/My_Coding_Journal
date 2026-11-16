/*
 * 题目名称：三数求和与乘积
 * 核心思路：读入三个浮点数，分别计算和与乘积并保留六位小数。
 * 踩坑记录：printf 读取 double 必须使用 %lf；给 int 变量使用 %f 会产生未定义行为。
 */
#include <stdio.h>
int main()
{
double a, b, c, sum, product;
scanf("%lf,%lf,%lf", &a, &b, &c);
sum=a+b+c;
product=a*b*c;
printf("a+b+c=%.6f\n", sum);
printf("a*b*c=%.6f\n", product);
return 0;
}
