/*
 * 6 回文串（实验八 第6关，实训 4212816）
 *
 * 题目要求：
 * 编写程序，判断指针所指的字符串是否为回文串（正读反读都一样）。
 * 在 f 函数中判断：是回文返回 1，否则返回 0。
 * 提示：首尾字符依次比较，*(x+i) 与 *(x+len-1-i)，
 * 不相等则置标识为 0 并结束；共比较 strlen()/2 次。
 *
 * 测试输入：level   预期输出：yes
 * 测试输入：xyxy    预期输出：no
 *
 * 练习卷：Begin-End 之间留空，请自行补全。
 */

#include <iostream>
#include <string.h>
using namespace std;
int f(char *x)
{
    // 请在Begin-End之间添加你的代码，
    //（1）判断指针x所指的字符串是否为回文 //
    //（2）若是则函数返回1，否则返回0//
    /********** Begin *********/


    /********** End **********/
}
int main()
{
    char str[80];
    puts("please input a string:");
    cin>>str;
    if(f(str))
        cout <<"yes\n";
    else
        cout <<"no\n";
    return 0;
}
