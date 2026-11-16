/*
 * 题目名称：判断正数、负数与零
 * 核心思路：读入一个浮点数，通过 if、else if 和 else 输出对应判断结果。
 * 踩坑记录：double 输入应使用 %lf；0 必须作为独立分支处理。
 */
#include<stdio.h>
int main()
{
double n;
scanf("%lf",&n);
printf("输入一个数字：你输入的是 ");
if (n>0)printf("正数");
else if (n<0)printf("负数");
else printf("0");
printf("。\n");
return 0;
}
