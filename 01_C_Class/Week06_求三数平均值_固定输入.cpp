/*
 * 题目名称：求三个数的平均值
 * 核心思路：先计算三个固定数的总和，再除以 3 得到平均值。
 * 踩坑记录：参与平均值计算的变量应使用浮点类型，避免整数除法丢失小数。
 */
#include <stdio.h>
int main()
{
float a,b,c,sum;
float  average;
a=10;  b=20;  c=35;
sum=a+b+c;
average=sum/3;
printf("the average is %.f",average);
return 0;
}
