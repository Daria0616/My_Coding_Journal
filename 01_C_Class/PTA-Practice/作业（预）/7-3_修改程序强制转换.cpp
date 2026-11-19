/*
 * 7-3 修改程序，得到正确结果
 *
 * 题目要求：修改程序，得到正确结果。无输入。
 *
 * 原始错误代码：
 *   #include <stdio.h>
 *   int main( )
 *   {
 *       int a, c;
 *       float b;
 *       a=14,b=144.345;
 *       c=a+(int)b;
 *       printf("%d+%f=%d",a,b,c);
 *       return 0;
 *   }
 *
 * 改错要点：
 * 1. b 为 float，参与 c 计算时按整型截断；输出 b 保留 3 位小数 %.3f。
 * 2. c=a+(float)b，b 截断取整 144，c=14+144=158。
 *
 * 输出样例：
 * 14+144.345=158
 */

#include <stdio.h>

int main()
{
    int a, c;
    float b;

    a = 14, b = 144.345;
    c = a + (float)b;

    printf("%d+%.3f=%d", a, b, c);
    return 0;
}
