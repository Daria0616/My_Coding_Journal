/*
 * 4_利用switch判断季节
 *
 * 题目要求：
 * 输入月份 month，用 switch...case 判断所属季节：
 * 春季 3、4、5；夏季 6、7、8；秋季 9、10、11；冬季 12、1、2；
 * 其他月份输出“无效的月份输入”。
 *
 * 输入格式：
 * 输入一个整数月份。
 *
 * 输出格式：
 * 输出 春季 / 夏季 / 秋季 / 冬季，或 无效的月份输入。
 *
 * 输入样例 1：
 * 2
 * 输出样例 1：
 * 冬季
 *
 * 输入样例 2：
 * 18
 * 输出样例 2：
 * 无效的月份输入
 *
 * 错题复盘（评测 4 次）：
 * 前三次分别为“4 组全不匹配”“4 组中 3 组不匹配”。
 *
 * 【错误代码（早期提交）】
 *   int month;
 *   switch (month) { ... }   // 漏写 cin >> month;
 *   case3： ...              // case 后缺空格，冒号写成中文全角“：”
 *   case8: ... case9: ...    // case 与数字之间缺空格
 *
 * 【错因】两处问题：① switch 之前漏掉读入语句 cin>>month;，month 是未初始化的随机值，
 *  季节判断全部错乱；② case 标号书写不规范，`case3` 缺空格、首条还用了全角冒号“：”。
 * 【修正】补回 cin>>month;，标号写成 `case 数字:` 半角冒号并留空格，补齐 default 分支后通过，即下方代码。
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int month; // 月份
    cin >> month;
    switch (month)
    {
        case 3:
        case 4:
        case 5:
            cout << "春季" << endl;
            break;
        case 6:
        case 7:
        case 8:
            cout << "夏季" << endl;
            break;
        case 9:
        case 10:
        case 11:
            cout << "秋季" << endl;
            break;
        case 12:
        case 1:
        case 2:
            cout << "冬季" << endl;
            break;
        default:
            cout << "无效的月份输入" << endl;
            break;
    }
    return 0;
}
