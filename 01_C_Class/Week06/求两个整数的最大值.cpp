/*
 * 题目名称：求两个整数的最大值
 * 核心思路：调用自定义 max 函数，用条件运算符返回较大的数。
 * 踩坑记录：scanf 中使用逗号作为分隔符时，输入也必须用逗号分隔。
 */
#include"stdio.h"
int max(int x,int y)
{
	return(x>y?x:y);
}
int main()
{
	int num1,num2,num3;
	printf("Input two integer number:");
	scanf("%d,%d",&num1,&num2);
	num3=max(num1,num2);
	printf("max=%d\n",num3);
	return 0;
}
