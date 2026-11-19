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
 * 对比失败代码：输出标签写成 "l="、"s="，等号后漏了要求的空格，
 * 而目标格式是 "l= "、"s= "；补上空格后第二次评测通过。
 * 提交记录截图：../../images/4212805-3_求圆的周长和面积_提交记录.png
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
