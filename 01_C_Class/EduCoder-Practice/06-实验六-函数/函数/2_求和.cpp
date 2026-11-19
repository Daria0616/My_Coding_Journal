/*
 * 2_求和
 *
 * 题目要求：
 * 编写求和函数 sum(x, y)，由主函数调用，计算 a+b 之和并输出。
 * 先做函数原型声明，再调用函数，实参与形参类型、个数一致。
 *
 * 输入格式：
 * 输入两个整数 a、b。
 *
 * 输出格式：
 * 输出 a+b=和。
 *
 * 输入样例：
 * 3 5
 *
 * 输出样例：
 * 3+5=8
 */

#include <iostream>
using namespace std;

int sum(int x, int y);

int main()
{
    int a, b, c;
    cin >> a >> b; // 输入 a 和 b 的值
    c = sum(a, b);
    cout << a << "+" << b << "=" << c << endl;
    return 0;
}

int sum(int x, int y)
{
    return x + y;
}
