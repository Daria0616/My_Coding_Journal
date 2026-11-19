/*
 * P5724 【深基4.习5】求极差 / 最大跨度值 / 最大值和最小值的差
 *
 * 题目要求：
 * 给出 n 和 n 个整数，求这 n 个整数中的极差。极差即一组数中
 * 最大值减去最小值的差。
 *
 * 输入格式：
 * 第一行输入一个正整数 n，表示整数个数；
 * 第二行输入 n 个整数，以空格隔开。
 *
 * 输出格式：
 * 输出一个整数，表示这 n 个整数的极差。
 *
 * 输入样例：
 * 6
 * 4 1 5 1 4 1
 *
 * 输出样例：
 * 4
 *
 * 数据范围：1 ≤ n ≤ 100，0 ≤ a_i ≤ 1000。
 *
 * 错题复盘（评测 2 次）：首次提交 0 分。
 *
 * 【错误代码（首次提交，求最小值部分）】
 *   int Min;
 *   for (int i = 1; i < length; i++)
 *       if (arr[i] < Max)
 *           Min = arr[i];
 *   return Max - Min;
 *
 * 【错因】求最小值时条件误写成与 Max 比较（应为 `< Min`），且 Min 未赋初值，
 *  导致最小值未被正确统计。
 * 【修正】最大值、最小值在同一趟遍历中维护，min_val 与 max_val 都以 arr[0]
 *  作为初值，比较条件分别用 `< min_val`、`> max_val`，即下方代码。
 */

#include <iostream>
using namespace std;

int getRange(int arr[], int length)
{
    int max_val = arr[0];
    int min_val = arr[0];

    for (int i = 1; i < length; i++) {
        if (arr[i] > max_val)
            max_val = arr[i];
        if (arr[i] < min_val)
            min_val = arr[i];
    }

    return max_val - min_val;
}

int main()
{
    int length;
    int arr[110];

    cin >> length;
    for (int i = 0; i < length; i++)
        cin >> arr[i];

    cout << getRange(arr, length) << endl;
    return 0;
}
