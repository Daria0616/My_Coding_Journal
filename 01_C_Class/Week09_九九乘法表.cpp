/*
 * 题目名称：九九乘法表
 * 核心思路：外层控制行，内层控制列，按行输出乘法结果。
 * 踩坑记录：内层循环上限应跟随当前行号，每行结束后需要单独换行。
 */
#include <stdio.h>
int main()
{   int i, j;
    for ( i = 1; i <= 9; i++ )
    {
        for ( j = 1; j <= i; j++ )
        {
            printf("%d*%d=%-4d", j, i, j * i);
        }
        printf("\n");
    }
    return 0;
}
