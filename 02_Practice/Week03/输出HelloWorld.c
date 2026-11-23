/*
 * 题目名称：输出 Hello World
 * 核心思路：使用 printf 输出固定文本并正常结束程序。
 * 踩坑记录：C 语言程序需要包含 <stdio.h>，输出字符串的引号必须成对。
 */
# include <stdio.h>
int main ()
{
	printf ("Hello world！\n");

	return 0;
}
