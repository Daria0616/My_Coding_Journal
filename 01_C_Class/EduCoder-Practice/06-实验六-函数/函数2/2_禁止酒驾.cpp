/*
 * 2_禁止酒驾
 *
 * 题目要求：
 * 判断驾驶员是否酒驾。标准为：
 *   （1）100ml 血液中酒精含量 < 20ml，不构成酒驾；
 *   （2）酒精含量 >= 20ml 且 < 80ml，构成酒驾；
 *   （3）酒精含量 >= 80ml，为醉驾。
 * 用函数实现：输入 10 名驾驶员的酒精含量，统计酒驾与醉驾的总人数及其百分比。
 *
 * 函数接口：
 * int Count(int arr[])：返回酒精含量 >= 20 的人数（酒驾 + 醉驾）。
 *
 * 输入格式：
 * 一行输入 10 个整数，为 10 名驾驶员的酒精含量。
 *
 * 输出格式：
 * 输出酒驾醉驾总人数与百分比，格式为 sum=人数,ratio=百分比%。
 *
 * 输入样例：
 * 12 25 20 36 8 74 95 23 52 10
 *
 * 输出样例：
 * sum=7,ratio=70%
 */

#include <iostream>
using namespace std;

int Count(int arr[])
{
    int sum = 0;
    for (int i = 0; i < 10; i++)
        if (arr[i] >= 20)
            sum++;
    return sum;
}

int main()
{
    int arr[10];
    for (int i = 0; i < 10; i++)
        cin >> arr[i];
    int sum = Count(arr);
    cout << "sum=" << sum << ",ratio=" << sum * 100 / 10 << "%" << endl;
    return 0;
}
