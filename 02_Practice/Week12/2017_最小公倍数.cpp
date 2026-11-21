/*
 * 2017 最小公倍数
 *
 * 题目要求：
 * 计算 n 个整数的最小公倍数（LCM）。
 *
 * 输入格式：
 * 先输入 n（2 ≤ n ≤ 10），再输入 n 个数 x（1 ≤ x ≤ 50）。
 *
 * 输出格式：
 * 输出 n 个数的最小公倍数（注意取值范围）。
 *
 * 输入样例：
 * 3 3 4 6
 *
 * 输出样例：
 * 12
 *
 * 【思路】先用辗转相除求两数 gcd，再逐个与下一个数合并：res = res / gcd(res, x) * x。
 */

#include <iostream>
#include <cmath>
using namespace std;

int gcd(int a, int b)
{
    while (a != 0) {
        int r = b % a;
        b = a;
        a = r;
    }
    return b;
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
        res = res / gcd(res, x) * x;
    }
    cout << res << endl;
    return 0;
}
