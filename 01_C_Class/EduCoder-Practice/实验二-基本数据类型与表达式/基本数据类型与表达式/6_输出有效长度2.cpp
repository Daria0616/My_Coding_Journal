/*
 * 6_输出有效长度2
 *
 * 题目要求：
 * 使用 setiosflags(ios::fixed) 与 setprecision(n) 规范浮点数输出的小数位数。
 * 输入浮点数 s，依次输出：s 默认形式、0 位小数、1 位小数、2 位小数、3 位小数、4 位小数，
 * 共 6 个数。setprecision(n) 在 fixed 模式下指定小数位数，截短时有四舍五入。
 *
 * 输入格式：
 * 输入一个实数 s。
 *
 * 输出格式：
 * 分 6 行输出 s 的默认形式及 0/1/2/3/4 位小数形式。
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
 * 3.1860
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double s;
    cin >> s;
    cout << s << endl;
    cout << setiosflags(ios::fixed);
    cout << setprecision(0) << s << endl;
    cout << setprecision(1) << s << endl;
    cout << setprecision(2) << s << endl;
    cout << setprecision(3) << s << endl;
    cout << setprecision(4) << s << endl;
    return 0;
}
