/*
 * 7-5 判断回文数
 *
 * 题目要求：
 * 找出 100 到 999（包含）以内的所有回文数，并按行打印，每行打印 10 个数据。
 * 数据之间使用一个空格分隔。
 *
 * 输入格式：
 * 不需要输入。
 *
 * 输出格式：
 * 每行输出 10 个三位回文数，共 9 行。
 *
 * 输出样例：
 * 101 111 121 131 141 151 161 171 181 191
 * 202 212 222 232 242 252 262 272 282 292
 * ...
 * 909 919 929 939 949 959 969 979 989 999
 *
 * 说明：
 * 三位回文数的百位数字和个位数字相同。
 */

#include <iostream>
using namespace std;

int main()
{
    int count = 0;

    for (int num = 100; num <= 999; num++) {
        int hundreds = num / 100;
        int ones = num % 10;

        if (hundreds == ones) {
            cout << num << " ";
            count++;

            if (count % 10 == 0)
                cout << endl;
        }
    }

    return 0;
}
