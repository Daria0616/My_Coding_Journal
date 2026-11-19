/*
 * P5735 【深基7.例1】距离函数（三角形周长）
 *
 * 题目要求：
 * 给出平面上不在同一直线上的三个点 (x1,y1)、(x2,y2)、(x3,y3)，
 * 坐标为实数且绝对值不超过 100.00，求它们围成的三角形周长，保留两位小数。
 * 两点距离 dis = sqrt((x2-x1)² + (y2-y1)²)。
 *
 * 输入格式：
 * 输入三行，第 i 行表示坐标 (xi, yi)，以一个空格隔开。
 *
 * 输出格式：
 * 输出一个两位小数，表示三角形的周长。
 *
 * 输入样例：
 * 0 0
 * 0 3
 * 4 0
 *
 * 输出样例：
 * 12.00
 *
 * 数据保证坐标均为实数，绝对值不超过 100，小数点后最多 3 位。
 *
 * 错题复盘（评测 2 次）：首次提交 0 分。
 *
 * 【错误代码（首次提交，距离函数形参）】
 *   double dis(double x1, double x2, double y1, double y2) {
 *       double a;
 *       a = sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));
 *       return a;
 *   }
 *
 * 【错因】形参顺序写成 (x1, x2, y1, y2)，而调用处按 (x1, y1, x2, y2) 传参，
 *  横纵坐标错位代入距离公式，距离算错。
 * 【修正】形参顺序改为 (x1, y1, x2, y2)，与调用处一致，即下方代码。
 */

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double dis(double x1, double y1, double x2, double y2)
{
    double a;
    a = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
    return a;
}

int main()
{
    double x1, y1, x2, y2, x3, y3;
    double C;

    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

    C = dis(x1, y1, x2, y2) + dis(x2, y2, x3, y3) + dis(x1, y1, x3, y3);

    cout << fixed << setprecision(2) << C << endl;
    return 0;
}
