/*
 * 2013 三角形面积
 *
 * 题目要求：
 * 给出二维坐标系上三个点的坐标，计算这三个点围成的三角形面积（保留三位小数）。
 *
 * 输入格式：
 * 输入 6 个整数，分别表示 3 个点的坐标（-100 ≤ x, y ≤ 100）。
 *
 * 输出格式：
 * 输出三角形面积，保留三位小数。
 *
 * 输入样例：
 * 0 0 1 1 2 0
 *
 * 输出样例：
 * 1.000
 *
 * 错题复盘（评测 3 次）：前两次各有 8 组测试不匹配。
 *
 * 【错误代码（前两次提交，叉积表达式）】
 *   double s = x1*(y2-y3) + x2*(y1-y3) + x3*(y1-y2);
 *   return fabs(s/2.0);
 *
 * 【错因】叉积第二项坐标写反：x2 对应的是 (y3 - y1)，误写成 (y1 - y3)；
 *  叉积公式应为 s = x1(y2-y3) + x2(y3-y1) + x3(y1-y2)，面积 = |s|/2。
 * 【修正】把第二项改回 x2*(y3-y1) 后通过，即下方代码。
 */

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double square(int x1, int y1, int x2, int y2, int x3, int y3)
{
    double s = x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2);
    return fabs(s) / 2.0;
}

int main()
{
    int x1, y1, x2, y2, x3, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    cout << fixed << setprecision(3)
         << square(x1, y1, x2, y2, x3, y3) << endl;
    return 0;
}
