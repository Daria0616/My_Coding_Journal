/*
 * 3_四则运算
 *
 * 题目要求：
 * 输入两个整数 a、b，求它们的和、差、积、商和余数，
 * 按 “a 运算符 b=结果” 的格式依次输出。除法为整数除法，取余用 %。
 *
 * 输入格式：
 * 输入两个整数 a、b，由空格分隔。
 *
 * 输出格式：
 * 依次输出 a+b、a-b、a*b、a/b、a%b，各占一行。
 *
 * 输入样例：
 * 35 4
 *
 * 输出样例：
 * 35+4=39
 * 35-4=31
 * 35*4=140
 * 35/4=8
 * 35%4=3
 */

#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    cout << a << "+" << b << "=" << a + b << endl;
    cout << a << "-" << b << "=" << a - b << endl;
    cout << a << "*" << b << "=" << a * b << endl;
    cout << a << "/" << b << "=" << a / b << endl;
    cout << a << "%" << b << "=" << a % b << endl;
    return 0;
}
