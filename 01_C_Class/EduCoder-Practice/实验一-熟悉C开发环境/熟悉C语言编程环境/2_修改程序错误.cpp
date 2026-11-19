/*
 * 2_修改程序错误
 *
 * 题目要求：
 * 本程序有 3 个错误（框架中以 found1 / found2 / found3 标注），请修改后正确运行。
 * 考查：头文件引用、标点符号、标识符大小写等基础语法。
 *
 * 输出样例：
 * c=15
 *
 * 说明：
 * a=10、b=5，c=a+b=15；修复后程序输出 c=15。
 */

#include <iostream>

int main()
{
    using namespace std;
    int a, b, c;
    a = 10, b = 5;
    c = a + b;
    cout << "c=" << c << endl;
    return 0;
}
