/*
 * 5 字符转换（实验八 第5关，实训 4212816）
 *
 * 题目要求：
 * 编写程序，对指针所指长度小于 20 的字符串，把所有下标为奇数位置上的
 * 小写字母转换为大写字母；该位置若不是字母则不转换，最后输出该字符串。
 * 提示：下标从 0 开始；小写字母 a~z，同名小写比大写大 32，减 32 即转大写。
 *
 * 测试输入：abc4EFg
 * 预期输出：aBc4EFg
 *
 * 练习卷：Begin-End 之间留空，请自行补全。
 */

#include <iostream>
#include <string.h>
using namespace std;
int fun(char *s)
{
    // 请在Begin-End之间添加你的代码，
    //将指针s所指字符串的所有下标为奇数位置上的字母转换为大写 //
    //若该位置上不是字母，则不转换//
    /********** Begin *********/


    /********** End **********/
}
int main()
{
    char str[100];
    cout << "please input string:"<<endl ;
    cin.getline(str,100);
    fun( str ) ;
    cout<<str;
    return 0;
}
