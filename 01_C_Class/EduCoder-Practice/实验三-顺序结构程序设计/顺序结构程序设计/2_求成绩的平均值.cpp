/*
 * 2_求成绩的平均值
 *
 * 题目要求：
 * 输入三个整数成绩 n1、n2、n3，求平均值并以 2 位小数显示平均成绩。
 * 求和时先把成绩转为 float，避免整数除法截断。
 *
 * 输入格式：
 * 输入三个整数成绩，由空格分隔。
 *
 * 输出格式：
 * 输出平均值，保留 2 位小数。
 *
 * 输入样例：
 * 89 75 92
 *
 * 输出样例：
 * 85.33
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n1, n2, n3; // 三个成绩
    float avg;      // 平均成绩
    cin >> n1 >> n2 >> n3;
    avg = ((float)n1 + (float)n2 + (float)n3) / 3;
    cout << setiosflags(ios::fixed) << setprecision(2) << avg << endl;
    return 0;
}
