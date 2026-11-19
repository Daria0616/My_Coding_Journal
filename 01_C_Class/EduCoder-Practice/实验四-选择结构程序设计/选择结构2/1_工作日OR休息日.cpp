/*
 * 1_工作日OR休息日
 *
 * 题目要求：
 * 输入星期几 d，判断输出“工作日”还是“休息日”：
 * 星期一到星期五（1~5）为工作日，星期六、星期日（6、7）为休息日，
 * 其他取值输出“出错”。用 switch...case 实现。
 *
 * 输入格式：
 * 输入一个整数表示星期几。
 *
 * 输出格式：
 * 输出 工作日 / 休息日 / 出错。
 *
 * 输入样例 1：
 * 2
 * 输出样例 1：
 * 工作日
 *
 * 输入样例 2：
 * -1
 * 输出样例 2：
 * 出错
 */

#include <iostream>
using namespace std;

int main()
{
    int d;
    cin >> d;
    switch (d)
    {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
            cout << "工作日" << endl;
            break;
        case 6:
        case 7:
            cout << "休息日" << endl;
            break;
        default:
            cout << "出错" << endl;
    }
    return 0;
}
