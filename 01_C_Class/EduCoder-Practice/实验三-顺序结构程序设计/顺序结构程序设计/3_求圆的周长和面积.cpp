/*
 * 3_求圆的周长和面积
 *
 * 题目要求：
 * 输入圆半径 r，pi=3.14159，计算周长 l=2*pi*r、面积 s=pi*r*r，
 * 结果用 setiosflags(ios::fixed) 与 setprecision(4) 显示小数点后 4 位。
 *
 * 输入格式：
 * 输入一个实数半径 r。
 *
 * 输出格式：
 * 分两行输出 l= 周长、s= 面积（等号后有一个空格），保留 4 位小数。
 *
 * 输入样例：
 * 5
 *
 * 输出样例：
 * l= 31.4159
 * s= 78.5397
 *
 * 错题复盘（评测 2 次）：
 * 第一次提交“共有 2 组测试集，其中有 2 组测试结果不匹配”。
 *
 * 【错误代码（首次提交，输出语句）】
 *   cout << ... << "l=" << l << endl;
 *   cout << ... << "s=" << s << endl;
 *
 * 【错因】输出标签写成 "l="、"s="，等号后漏了题目要求的空格，
 *  目标格式应为 "l= "、"s= "。
 * 【修正】标签补上等号后的空格后第二次评测通过，即下方代码。
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float r, l, s, pi; // r 为半径，l 为周长，s 为面积
    pi = 3.14159;
    cin >> r;
    l = 2 * pi * r;
    s = r * pi * r;
    cout << setiosflags(ios::fixed) << setprecision(4) << "l= " << l << endl;
    cout << setiosflags(ios::fixed) << setprecision(4) << "s= " << s << endl;
    return 0;
}
