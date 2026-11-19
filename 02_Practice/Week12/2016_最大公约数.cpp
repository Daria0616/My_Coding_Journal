/*
 * 2016 最大公约数
 *
 * 题目要求：
 * 计算 n 个整数的最大公约数（GCD）。
 *
 * 输入格式：
 * 先输入 n（2 ≤ n ≤ 10），再输入 n 个数 x（1 ≤ x ≤ 109）。
 *
 * 输出格式：
 * 输出 n 个数的最大公约数。
 *
 * 输入样例：
 * 3 3 4 6
 *
 * 输出样例：
 * 1
 *
 * 说明：本关一次评测通过，无失败记录。
 * 【思路】先用辗转相除求两数 gcd，再逐个与下一个数合并：res = gcd(res, x)。
 */

#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main()
{
    int n;
    cin >> n;
    int res;
    cin >> res;
    for (int i = 1; i < n; i++) {
        int x;
        cin >> x;
        res = gcd(res, x);
    }
    cout << res << endl;
    return 0;
}
