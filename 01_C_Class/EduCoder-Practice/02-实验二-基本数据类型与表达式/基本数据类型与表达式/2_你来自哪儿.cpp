/*
 * 2_你来自哪儿
 *
 * 题目要求：
 * 编写一个能输入输出字符串的程序。cin 读字符串遇空格/制表符/换行即结束；
 * 若字符串带有空格，需使用 getline() 整行读入，再用 cout 输出。
 *
 * 输入格式：
 * 输入一行带空格的字符串。
 *
 * 输出格式：
 * 原样输出该行字符串。
 *
 * 输入样例：
 * Where are you come from?
 *
 * 输出样例：
 * Where are you come from?
 */

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    cout << s << endl;
    return 0;
}
