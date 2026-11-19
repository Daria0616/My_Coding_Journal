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
 * 错题复盘（评测 2 次）：首次提交 10 组中 4 组不匹配。
 *
 * 【错误代码（首次提交，主程序）】
 *   int res;
 *   cin >> res;
 *   int cu = 1;
 *   cu *= res;
 *   for (int i = 1; i < n; i++) {
 *       int x;
 *       cin >> x;
 *       res = gcd(res, x);
 *       cu *= x;
 *   }
 *   cout << cu / pow(res, n - 1) << endl;
 *
 * 【错因】误用“所有数乘积 ÷ gcd 的 n-1 次幂”来估算 LCM，该公式并不成立；
 *  还引入 pow 浮点运算，结果与整数 LCM 不符。
 * 【修正】正确做法是逐个合并：每读入一个数 x，用当前 LCM 与 x 求 gcd，
 *  再按 LCM(a,b)=a/gcd(a,b)*b 累积（先除后乘避免溢出），即下方代码。
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
