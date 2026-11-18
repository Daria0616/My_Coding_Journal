/*
 * 7-7 移动字符串
 *
 * 题目要求：
 * 编写一个移动字符串的小程序。把字符串中第 1 到第 m 个字符平移到字符串末尾，
 * 把第 m+1 个字符到最后的字符移到字符串前部。
 * 可借助 string 的 substr 函数提取子串：str.substr(start, length)，
 * 并使用 "+" 连接两个字符串。
 *
 * 输入格式：
 * 输入一个整数 m，作为字符串的分割位置。
 *
 * 输出格式：
 * 输出移动后的字符串。
 *
 * 输入样例：
 * 3
 *
 * 输出样例：
 * DEFGHIJKABC
 *
 * 说明：
 * 原字符串为 ABCDEFGHIJK，m=3 时，前 3 个字符 ABC 移到末尾，
 * 移动后字符串内容为 DEFGHIJKABC。
 */

#include <iostream>
#include <string>
using namespace std;
string fun(string str, int m)
{
    // 请在 Begin-End 之间添加你的代码，
    // 移动字符串中的内容 //
    // 把第 1 到第 m 个字符，平移到字符串的最后，把第 m+1 到最后的字符移到字符串的前部。
    /*  例如，字符串中原有的内容为 ABCDEFGHIJK，m 的值为 3，
        移动后，字符串中的内容应该是 DEFGHIJKABC。  */
    /********** Begin *********/
    string left = str.substr(0, m);
    string right = str.substr(m);
    str = right + left;
    return str;
    /********** End **********/
}
int main()
{
    string str = "ABCDEFGHIJK";
    int m;
    // 输入 m 的值，作为字符串的分割位置
    cin >> m;
    cout << fun(str, m) << endl;
    return 0;
}
