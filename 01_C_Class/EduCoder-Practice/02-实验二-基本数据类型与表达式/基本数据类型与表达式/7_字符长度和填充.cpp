/*
 * 7_字符长度和填充
 *
 * 题目要求：
 * 编写一个按长度显示字符内容的程序。
 * setw() 设置字段宽度（需 <iomanip>，默认右对齐、空格填充）；
 * setfill() 设置填充字符，默认填充在左侧。
 * 先以空格为填充字符，按宽度 3、2 输出字符；再以 '*' 为填充字符，按宽度 2、3 输出。
 *
 * 输入格式：
 * 输入一个字符 ch。
 *
 * 输出格式：
 * 共四行，依次按宽度 3（空格填充）、宽度 2（空格填充）、宽度 2（* 填充）、宽度 3（* 填充）输出 ch。
 *
 * 输入样例：
 * A
 *
 * 输出样例（四行）：
 *   A
 *  A
 * *A
 * **A
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    char ch;
    cin >> ch;
    cout << setfill(' ') << setw(3) << ch << endl;
    cout << setfill(' ') << setw(2) << ch << endl;
    cout << setfill('*') << setw(2) << ch << endl;
    cout << setfill('*') << setw(3) << ch << endl;
    cout << setfill(' ');
    return 0;
}
