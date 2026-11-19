/*
 * 5_平均成绩
 *
 * 题目要求：
 * 定义 average(int n) 函数，输入 n 门课程成绩，计算并输出平均成绩，
 * 保留小数点后 1 位。
 *
 * 输入格式：
 * 先输入课程门数 n，再依次输入 n 个成绩。
 *
 * 输出格式：
 * 输出 平均成绩=平均值（保留 1 位小数）。
 *
 * 输入样例：
 * 5 80 79 92 93 85
 *
 * 输出样例：
 * 平均成绩=85.8
 */

#include <iostream>
#include <iomanip>
using namespace std;

int average(int n)
{
    float aver = 0; // 平均成绩
    int grade;
    for (int i = 0; i < n; i++)
    {
        cin >> grade;
        aver += grade;
    }
    cout << "平均成绩=" << fixed << setprecision(1) << aver / n << endl;
    return 0;
}

int main()
{
    int n;
    cin >> n;
    average(n);
    return 0;
}
