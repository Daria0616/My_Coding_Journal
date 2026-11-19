/*
 * 题目名称：海伦公式求三角形面积
 * 核心思路：读入三边长，计算半周长后使用海伦公式求面积。
 * 踩坑记录：三边长必须满足三角形不等式；sqrt 的实参不能为负数。
 */
#include<stdio.h>
#include<math.h>
int main()
{
double a,b,c,s,area;
scanf("%lf,%lf,%lf",&a,&b,&c);
s=(a+b+c)/2;
area=sqrt(s*(s-a)*(s-b)*(s-c));
printf("%.6f",area);
return 0;
}
