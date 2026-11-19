/*
 * 2116 完美平方数
 *
 * 题目要求：
 * 给定正整数 n，找到最少数量的完美平方数（1, 4, 9, 16, ...），
 * 使其总和恰好为 n。例如 n=12 返回 3（12 = 4 + 4 + 4）；
 * n=13 返回 2（13 = 4 + 9）。
 *
 * 输入格式：
 * 输入一个正整数 n。
 *
 * 输出格式：
 * 输出组成 n 所需的最少完美平方数个数。
 *
 * 输入样例：
 * 12
 *
 * 输出样例：
 * 3
 *
 * 说明：本关在平台上尚未评测通过，编辑器内为未完成初稿（空循环）；
 * 下方为补全的动态规划解法。
 * 【初稿（未完成）】
 *   int n;
 *   cin >> n;
 *   for (int i = 1; i < n; i++) { }   // 循环体为空，未做任何计算
 *
 * 【思路】dp[i] 表示凑出 i 所需的最少平方数个数。
 *  dp[0] = 0；对每个 i，枚举不超过 i 的平方数 j²，
 *  dp[i] = min(dp[i], dp[i - j*j] + 1)。
 */

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> dp(n + 1, n); // 最坏情况全用 1，个数为 i
    dp[0] = 0;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j * j <= i; j++) {
            dp[i] = min(dp[i], dp[i - j * j] + 1);
        }
    }

    cout << dp[n] << endl;
    return 0;
}
