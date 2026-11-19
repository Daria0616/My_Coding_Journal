/*
 * 6_求三角形的面积
 *
 * 题目要求：
 * 输入三角形三条边长 a、b、c，用海伦公式求面积。
 * 半周长 s=(a+b+c)/2，面积 = sqrt(s(s-a)(s-b)(s-c))，开平方用 sqrt()（<cmath>）。
 *
 * 输入格式：
 * 输入三个整数边长，由空格分隔。
 *
 * 输出格式：
 * 输出 面积=面积值。
 *
 * 输入样例：
 * 3 4 5
 *
 * 输出样例：
 * 面积=6
 */

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a, b, c;
    float s, area; // area 表示三角形面积
    cin >> a >> b >> c;
    s = (a + b + c) / 2;
    area = sqrt(s * (s - a) * (s - b) * (s - c));
    cout << "面积=" << area << endl;
    return 0;
}
