/*
 * 3 统计各类字符个数（数组2 · 第3关，实训 4212815，评测 3 次通过）
 *
 * 题目要求：
 * 编写程序统计一个字符串中字母、数字以及其他字符的个数。
 * sum1 存放字母个数，sum2 存放数字字符个数，sum3 存放其他字符个数。
 *
 * 思路：
 * 逐个读取字符直到遇到字符串结束符 '\0'：
 *   字母：a~z 或 A~Z；数字：0~9；其余归入其他字符。
 *
 * 输入格式：
 * 一行字符串（含空格，长度不超过 80），用 cin.get 读入。
 *
 * 输出格式：
 * 输出 sum1=字母数,sum2=数字数,sum3=其他字符数。
 *
 * 输入样例：$^%$f  roe48r3'87I;495q234jfasl23  239a~~@#23f4hkdaf
 * 输出样例：sum1=19,sum2=19,sum3=14
 *
 * 错题复盘：
 * 早期数字判断写成 else if (a[i]>'0' && a[i]<='9')，左边界漏了等号，
 * 字符 '0' 被误归入其他字符，导致数字个数少统计。应为 a[i]>='0' && a[i]<='9'。
 */

#include <iostream>
#include <string.h>
using namespace std;

int count(char a[])
{
    int sum1 = 0, sum2 = 0, sum3 = 0;
    // 请在Begin-End之间添加你的代码，
    //(1)sum1存放字母的个数，sum2存放数字字符的个数，sum3存放其他字符的个数//
    //(2)统计字符串a中字母、数字以及其他字符的个数。//
    /********** Begin *********/
    int i = 0;
    while (a[i] != '\0') {
        if (a[i] >= 'a' && a[i] <= 'z' || a[i] >= 'A' && a[i] <= 'Z')
            sum1++;
        else if (a[i] >= '0' && a[i] <= '9')
            sum2++;
        else sum3++;
        i++;
    }

    /********** End **********/
    cout << "sum1=" << sum1 << "," << "sum2=" << sum2 << "," << "sum3=" << sum3 << endl;
    return 0;
}

int main()
{
    char string[81];
    cout << "input string: " << endl;
    cin.get(string, 81);
    count(string);
}
