/*
 * 7-7 判断是否为素数
 *
 * 题目要求：
 * 输入正整数 n，判断是否为素数。
 * 素数是指除了 1 和它本身以外不再有其他因数的数。
 *
 * 输入格式：
 * 输入一个整数。
 *
 * 输入样例：
 * 55
 *
 * 输出格式：
 * 如果是素数，输出“n是素数”；否则输出“n不是素数”。
 *
 * 输出样例：
 * 55不是素数
 */

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    bool isPrime = true;

    if (n <= 1) {
        isPrime = false;
    } else {
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                isPrime = false;
                break;
            }
        }
    }

    if (isPrime)
        cout << n << "是素数" << endl;
    else
        cout << n << "不是素数" << endl;

    return 0;
}
