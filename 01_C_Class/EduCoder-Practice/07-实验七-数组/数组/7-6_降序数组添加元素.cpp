/*
 * 7-6 降序数组添加元素
 *
 * 题目要求：
 * 已有一个按降序排列的数组 a[9] = {50, 25, 15, 10, 8, 4, 2, -10}，
 * 读入一个新元素 data，将其插入到数组中合适的位置，使插入后的数组仍然保持降序。
 * 先把 data 存到数组最后一个下标位，再从后向前依次比较：
 * 若后面的元素大于前面的元素，则交换二者；否则停止比较。
 * 最后按 setw(5) 格式输出插入后的全部 9 个元素。
 *
 * 输入格式：
 * 输入一个整数 data（待插入元素）。
 *
 * 输出格式：
 * 在一行内输出插入后的 9 个降序元素，每个元素占 5 个字符宽度。
 *
 * 输入样例：
 * 22
 *
 * 输出样例：
 *    50   25   22   15   10    8    4    2  -10
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int data, temp, k;
    int a[9] = {50, 25, 15, 10, 8, 4, 2, -10};
    cout << "Enter a data:" << endl;
    cin >> data;

    // 请在 Begin-End 之间添加你的代码，
    // 将输入的 data，按降序排列到 a 数组中 //
    /********** Begin *********/
    a[8] = data;
    for (int k = 8; k >= 0; k--)
        if (a[k] > a[k - 1]) {
            int m = a[k];
            a[k] = a[k - 1];
            a[k - 1] = m;
        }
        else
            break;
    for (int i = 0; i < 9; i++)
        cout << fixed << setw(5) << a[i];

    /********** End **********/
    cout << "\n";
    return 0;
}
