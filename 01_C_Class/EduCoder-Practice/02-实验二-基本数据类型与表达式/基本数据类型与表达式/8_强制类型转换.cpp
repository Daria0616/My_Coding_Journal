/*
 * 8_强制类型转换
 *
 * 题目要求：
 * 编写一个强制数据转换的程序。
 * 1. 强制转换变量 b 的值为整型；
 * 2. 计算 a+b 的结果赋值给 c；
 * 3. 输出 c 的结果。
 * (int)a 将变量强制转为整型，(float)b 强制转为浮点型。
 *
 * 输入格式：
 * 输入一个整数 a 和一个实数 b，由空格分隔。
 *
 * 输出格式：
 * 输出 c=结果（c 为整型，小数部分截断）。
 *
 * 输入样例：
 * 14 144.345
 *
 * 输出样例：
 * c=158
 */

#include <iostream>
using namespace std;

int main()
{
    int a, c;
    float b;
    cin >> a >> b;
    (int)b;
    c = a + b;
    cout << "c=" << c << endl;
    return 0;
}
