/*
 * 3_整除个数
 *
 * 题目要求：
 * 在 fun(m) 中遍历 1~m（含 m），输出所有能被 7 或 11 整除的整数，
 * 并统计这些数的个数 n，由 fun 返回。注意：先输出符合条件的数，再输出个数。
 *
 * 输入格式：
 * 输入一个整数 m。
 *
 * 输出格式：
 * 先空格分隔输出符合条件的数，最后输出 n=个数。
 *
 * 输入样例：
 * 50
 *
 * 输出样例：
 * 7 11 14 21 22 28 33 35 42 44 49 n=11
 *
 * 错题复盘（评测 3 次）：
 * 第一次“3 组测试集全部不匹配”。
 *
 * 【错误代码（首次提交，循环体内）】
 *   for (int i = 1; i <= m; i++) {
 *       if (i % 7 == 0 || i % 11 == 0) {
 *           cout << i << " ";
 *           count++;
 *           return count;     // 误放在 if / 循环体内
 *       }
 *   }
 *
 * 【错因】return count 误写进循环体内，遇到第一个符合条件的数就返回，
 *  只输出一个数、个数为 1；return 应放在循环结束后。
 * 【修正】把 return 移到循环外后通过，即下方代码。
 */

#include <iostream>
using namespace std;

int fun(int m)
{
    int count = 0;
    for (int i = 1; i <= m; i++)
    {
        if (i % 7 == 0 || i % 11 == 0)
        {
            cout << i << " ";
            count++;
        }
    }
    return count;
}

int main()
{
    int m;
    cin >> m;
    int n = fun(m);
    cout << "n=" << n << endl;
    return 0;
}
