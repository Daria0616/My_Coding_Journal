/*
 * 7-2 数组的最大值
 *
 * 题目要求：
 * 遍历含有 8 个元素的数组，求出其中的最大值，以及最大值在数组中的位置（从 1 开始计数）。
 * 设 a[0] 为初始最大值 max，依次访问其余元素：若 a[i] > max，则用新元素替换 max，
 * 并记录其下标 k；否则继续访问下一个元素。
 *
 * 输入格式：
 * 一行输入 8 个整数，由空格分隔。
 *
 * 输出格式：
 * 第一行输出最大值所在位置，格式为 position is 位置；
 * 第二行输出最大值，格式为 value is 最大值。
 *
 * 输入样例：
 * 5 8 4 7 1 2 11 10
 *
 * 输出样例：
 * position is 7
 * value is 11
 */

#include <iostream>
using namespace std;
int main()
{
    int i, max, k; // max 为最大值，k 为最大值的下标
    int a[8];
    for (i = 0; i < 8; i++)
        cin >> a[i];

    // 请在 Begin-End 之间添加你的代码，
    // 求数组 a 的最大值，及最大值在数组中的位置 //
    /********** Begin *********/
    max = a[0];
    for (int i = 1; i < 8; i++) {
        if (a[i] > max) {
            max = a[i];
            k = i;
        }
    }

    /********** End **********/
    cout << "position is " << k + 1 << endl;
    cout << "value is " << max << endl;
    return 0;
}
