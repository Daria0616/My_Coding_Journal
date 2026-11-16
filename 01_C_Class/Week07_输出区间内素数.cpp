/*
 * 题目名称：输出区间内素数
 * 核心思路：遍历 [A, B]，逐一检查是否存在除 1 和自身以外的因数。
 * 踩坑记录：1 不是素数，因此枚举起点应至少为 2；输出时用逗号分隔结果。
 */
#include<stdio.h>
int main()
{
	int A, B, m, i, flag, a = 0;
	scanf("%d%d", &A, &B);

	for (m = (A < 2 ? 2 : A); m <= B; m++)
	{
		flag = 1;
		for (i = 2; i < m; i++)
			if (m % i == 0)
				flag = 0;
		if (flag == 1)
		{
			if (a == 0)
			{
				printf("%d", m); a++;
			}
			else
				printf(",%d", m);
		}
}
}
