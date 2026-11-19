/*
 * 5_字符转换
 *
 * 题目要求：
 * 从键盘输入一个字符 c。若是数字字符（'0'~'9'），转换成对应数字后输出；
 * 否则输出该字符的 ASCII 码值。数字字符转数字用 c - '0'。
 *
 * 输入格式：
 * 输入一个字符。
 *
 * 输出格式：
 * 数字字符输出对应整数；其他字符输出其 ASCII 码。
 *
 * 输入样例 1：
 * 4
 * 输出样例 1：
 * 4
 *
 * 输入样例 2：
 * d
 * 输出样例 2：
 * 100
 */

#include <iostream>
using namespace std;

int main()
{
    char c; // 字符
    cin >> c;
    if (c >= '0' && c <= '9')
    {
        int i;
        i = c - '0';
        cout << i;
    }
    else
    {
        int x;
        x = (int)c;
        cout << x;
    }
    return 0;
}
