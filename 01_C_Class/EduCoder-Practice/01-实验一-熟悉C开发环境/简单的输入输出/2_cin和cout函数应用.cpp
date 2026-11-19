/*
 * 2_cin和cout函数应用
 *
 * 题目要求：
 * 编写一个能计算 3 位同学平均成绩的程序。使用 cin 连续读入 3 个成绩，
 * 计算平均值后用 cout 输出。成绩设置为 float 类型。
 *
 * 输入格式：
 * 一行输入 3 个实数（3 位同学的成绩），由空格分隔。
 *
 * 输出格式：
 * 输出平均成绩，格式为 平均成绩=平均值。
 *
 * 输入样例：
 * 85.6 78.9 90.6
 *
 * 输出样例：
 * 平均成绩=85.0333
 */

#include <iostream>
using namespace std;

int main()
{
    float a, b, c, avg; // avg 表示平均成绩
    cin >> a >> b >> c;
    avg = (a + b + c) / 3;
    cout << "平均成绩=" << avg << endl;
    return 0;
}
