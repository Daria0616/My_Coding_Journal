/*
 * 5_输出有效长度1
 *
 * 题目要求：
 * 使用 setprecision(n) 控制输出浮点数的有效数字个数（C++ 默认有效位为 6）。
 * 输入浮点数 s，依次输出：s 默认形式、1 位有效数、2 位有效数、3 位有效数、
 * 4 位有效数、5 位有效数，共 6 个数。截短显示时四舍五入。
 *
 * 输入格式：
 * 输入一个实数 s。
 *
 * 输出格式：
 * 分 6 行输出 s 的默认形式及 1/2/3/4/5 位有效数字形式。
 *
 * 输入样例：
 * 3.186
 *
 * 输出样例：
 * 3.186
 * 3
 * 3.2
 * 3.19
 * 3.186
 * 3.186
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double s;
    cin >> s;
    cout << s << endl;
    cout << setprecision(1) << s << endl;
    cout << setprecision(2) << s << endl;
    cout << setprecision(3) << s << endl;
    cout << setprecision(4) << s << endl;
    cout << setprecision(5) << s << endl;
    return 0;
}
