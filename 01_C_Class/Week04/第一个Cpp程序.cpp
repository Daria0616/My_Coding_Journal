/*
 * 题目名称：第一个 C++ 程序
 * 核心思路：包含 iostream，使用 cout 输出文本后返回 0。
 * 踩坑记录：遗漏 <iostream> 会导致 cout 和 endl 未声明；正常结束应返回 0。
 */
#include <iostream>   // ← 加这一行
using namespace std;
int main()
{
    cout << "hello C++" << endl;
    return 0;   // 顺便建议：正常结束用 return 0; 而不是 return 1;
}
