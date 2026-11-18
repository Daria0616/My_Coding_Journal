/*
 * 7-4 兔子繁殖问题
 *
 * 题目要求：
 * 兔子在出生两个月后具有生殖能力。设有一对兔子每个月都生一对兔子，
 * 生出来的兔子在出生两个月后，每个月也可以生一对兔子。
 * 从一对小兔开始，求第 12 个月兔子共有多少对。
 *
 * 输入格式：
 * 无输入。
 *
 * 输出格式：
 * 输出样式如下，不要有多余空格：
 * 第12个月兔子共有144对
 *
 * 输出样例：
 * 第12个月兔子共有144对
 */

#include <iostream>
using namespace std;

int main()
{
    int previous = 1;
    int current = 1;

    for (int month = 3; month <= 12; month++) {
        int next = previous + current;
        previous = current;
        current = next;
    }

    cout << "第12个月兔子共有" << current << "对" << endl;

    return 0;
}
