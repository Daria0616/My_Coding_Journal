/*
 * 7-8 输出同构数
 *
 * 题目要求：
 * 打印输出 1000 以内的所有同构数。
 * 同构数是指一个数出现在它平方数的右端。
 * 例如 5^2=25，5 出现在 25 的右端，所以 5 是同构数。
 *
 * 输入格式：
 * 不需要输入数据。
 *
 * 输出格式：
 * 输出数据之间用一个空格分隔。
 *
 * 输出样例：
 * 1 5 6 25 76 376 625
 *
 * 限制：
 * 代码长度 16 KB，时间 400 ms，内存 64 MB。
 */

#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 1000; i++) {
        long long square = 1LL * i * i;
        int mod = 10;
        int temp = i;

        // 根据 i 的位数确定需要截取平方数的末几位
        while (temp >= 10) {
            mod *= 10;
            temp /= 10;
        }

        if (square % mod == i)
            cout << i << " ";
    }

    return 0;
}
