/*
 * 4_交互数值
 *
 * 题目要求：
 * 输入两个整数 a、b，借助临时变量 t 交换 a、b 的值，并输出交换后的结果。
 *
 * 输入格式：
 * 输入两个整数 a、b，由空格分隔。
 *
 * 输出格式：
 * 输出交换后的 a 与 b，格式为 a=值,b=值。
 *
 * 输入样例：
 * 5 6
 *
 * 输出样例：
 * a=6,b=5
 */

#include <iostream>
using namespace std;

int main()
{
    int a, b, t;
    cin >> a >> b;
    t = a;
    a = b;
    b = t;
    cout << "a=" << a << "," << "b=" << b << endl;
    return 0;
}
