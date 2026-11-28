/*
 * 7-4 元音统计
 *
 * 题目要求：
 * 输入一个英文字母单词（仅包含小写字母），统计元音字母（a, e, i, o, u）个数。
 *
 * 输入格式：
 * 一行输入一个小写字母单词，换行符结束，不超过 100 个字符。
 *
 * 输出格式：
 * 一行输出一个整数，表示元音字母个数。
 *
 * 输入样例：
 * hello
 *
 * 输出样例：
 * 2
 *
 */

#include <stdio.h>
#include <string.h>
int main(){
    char str[110];//防越界
    scanf("%s",str);
    int cnt=0;
    for (int k=0;str[k]!='\0';k++)
    if (str[k]=='a'||str[k]=='e'||str[k]=='i'||str[k]=='o'||str[k]=='u'){
        cnt++;
    }
    printf("%d\n",cnt);
    return 0;
}
