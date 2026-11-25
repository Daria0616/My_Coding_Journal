/*
 * 2 保留偶数（数组2 · 第2关，实训 4212815，评测 1 次通过）
 *
 * 题目要求：
 * 编写 fun 函数，保留数组中的偶数，把偶数按原顺序从下标 0 开始依次重新存储，
 * 删除奇数，最后返回偶数的个数。
 *
 * 思路：
 * 用下标 j 记录偶数存放位置（初值 0）；遍历数组，遇到偶数就存入 a[j] 并 j++，
 * 遍历结束后 j 即为偶数个数。
 *
 * 输入格式：
 * 一行输入 9 个整数（N=9），由空格分隔。
 *
 * 输出格式：
 * 先输出 "The original data:" 及原始 9 个数（每个占 4 位宽度）；
 * 再输出 "The number of even : " 与偶数个数；
 * 最后输出 "The even :" 及保留下来的偶数（每个占 4 位宽度）。
 *
 * 输入样例：9 1 4 2 3 6 5 8 7
 * 输出样例：
 * The original data:
 *    9   1   4   2   3   6   5   8   7
 * The number of even : 4
 * The even :
 *    4   2   6   8
 */

#include <iostream>
#include <iomanip>
using namespace std;
#define N 9

int fun(int a[], int n)
{
    // 请在Begin-End之间添加你的代码，
    //(1)将a数组中的偶数按原顺序依次存放到a[0]，a[1]，a[2]……，//
    //(2)把奇数从数组中删除，最终fun函数返回偶数的个数。//
    /********** Begin *********/
    int j = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0) {
            a[j] = a[i];
            j++;
        }
    }
    return j;
    /********** End *********/
}

int main()
{
    int b[N], i, n;
    for (i = 0; i < N; i++)
        cin >> b[i];
    cout << "The original data:" << endl;
    for (i = 0; i < N; i++)
        cout << setw(4) << b[i];
    cout << "\n";
    n = fun(b, N);
    cout << "\nThe number of even : " << n << endl;
    cout << "\nThe even : " << endl;
    for (i = 0; i < n; i++)
        cout << setw(4) << b[i];
    cout << "\n";
    return 0;
}
