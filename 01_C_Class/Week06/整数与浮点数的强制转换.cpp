/*
 * 题目名称：整数与浮点数的强制转换
 * 核心思路：将整数和浮点数相加，并通过强制转换存入整数变量。
 * 踩坑记录：浮点数转整数会截断小数部分，不会自动四舍五入。
 */
#include <stdio.h>
int main()
{
int a, c;
float b;
a=14,b=144.345;
c=a+(float)b;
printf("%d+%f=%d",a,b,c);
return 0;
}
