/*
 * 4_进制转换
 *
 * 题目要求：
 * 输入一个整数 num，分别输出它的十进制、十六进制、八进制表示。
 * 使用流操纵符 dec（十进制）、hex（十六进制）、oct（八进制）。
 *
 * 输入格式：
 * 输入一个整数 num。
 *
 * 输出格式：
 * 依次输出 Decimal:十进制、Hexadecimal:十六进制、Octal:八进制。
 *
 * 输入样例：
 * 1001
 *
 * 输出样例：
 * Decimal:1001
 * Hexadecimal:3e9
 * Octal:1751
 */

#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;
    cout << "Decimal:" << dec << num << endl;
    cout << "Hexadecimal:" << hex << num << endl;
    cout << "Octal:" << oct << num << endl;
    return 0;
}
