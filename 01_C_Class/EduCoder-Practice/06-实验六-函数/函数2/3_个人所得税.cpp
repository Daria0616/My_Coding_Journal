/*
 * 3_个人所得税
 *
 * 题目要求：
 * 个人收入计税方式：个人年收入减去五险一金，再扣除个人减免部分后，
 * 超过个税起征点的部分需缴纳个人所得税。个税起征点为每年 60000 元。
 * 用函数实现：输入小明的年纯收入（已除去所有免税部分），计算并输出年个人所得税。
 * 应缴个税收入 = 年纯收入 - 60000；个税 = 应缴个税收入 × 适用税率 - 速算扣除数。
 * 注意：不超过表示 <=，超过表示 >。年个人所得税保留小数点后 2 位。
 *
 * 七级超额累进税率（应缴个税收入 / 税率 / 速算扣除数）：
 *   <=36000        3%      0
 *   <=144000       10%     2520
 *   <=300000       20%     16920
 *   <=420000       25%     31920
 *   <=660000       30%     52920
 *   <=960000       35%     85920
 *   >960000        45%     181920
 *
 * 函数接口：
 * float Tax(int income)：返回年个人所得税。
 *
 * 输入格式：
 * 输入一个整数 income（年纯收入）。
 *
 * 输出格式：
 * 输出税额，格式为 tax=税额（保留 2 位小数）。
 *
 * 输入样例：
 * 260000
 *
 * 输出样例：
 * tax=23080.00
 *
 * 说明：
 * 应缴个税收入 = 260000 - 60000 = 200000，属第 3 档（20%，速算扣除 16920），
 * 税额 = 200000×20% - 16920 = 23080.00。
 * 若年收入不超过起征点（如 50123），税额为 tax=0.00。
 */

#include <iostream>
#include <iomanip>
using namespace std;

float Tax(int income)
{
    int start = income - 60000;
    if (start <= 0)
        return 0;
    else if (start <= 36000)
        return start * 0.03;
    else if (start <= 144000)
        return start * 0.1 - 2520;
    else if (start <= 300000)
        return start * 0.2 - 16920;
    else if (start <= 420000)
        return start * 0.25 - 31920;
    else if (start <= 660000)
        return start * 0.3 - 52920;
    else if (start <= 960000)
        return start * 0.35 - 85920;
    else
        return start * 0.45 - 181920;
}

int main()
{
    int income;
    cin >> income;
    float tax = Tax(income);
    cout << "tax=" << fixed << setprecision(2) << tax << endl;
    return 0;
}
