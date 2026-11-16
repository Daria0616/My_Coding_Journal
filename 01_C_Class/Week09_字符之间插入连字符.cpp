/*
 * 题目名称：字符之间插入连字符
 * 核心思路：逐个读取字符，第一个字符直接输出，后续字符前插入短横线。
 * 踩坑记录：混合使用 scanf 和 getchar 时，要注意换行符可能被当作输入字符。
 */
# include <stdio.h>
int main()
{
    char ch;
    int first = 1, k, n;

    scanf("%d\n", &n);
    for(k = 1; k <= n; k++){
       ch = getchar();
       if  (first ==1){
             putchar(ch);
             first=0;
        }else{
             putchar('-');
             putchar(ch);
    }
	}

    return 0;
}
