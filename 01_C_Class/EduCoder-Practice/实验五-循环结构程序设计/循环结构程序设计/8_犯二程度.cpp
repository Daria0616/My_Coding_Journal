/*
 * 8_犯二程度
 *
 * 题目要求：
 * 一个整数的“犯二程度”定义为数字中包含 2 的个数与其位数的比值：
 *   - 负数：犯二程度 ×1.5；
 *   - 偶数：犯二程度 ×2；
 * 输入一个不超过 8 位的整数 n，输出犯二程度，保留小数点后两位并加 %。
 *
 * 输入格式：
 * 输入一个整数 n。
 *
 * 输出格式：
 * 输出百分比，保留 2 位小数，后接 %。
 *
 * 输入样例：
 * -1314222336
 *
 * 输出样例：
 * 90.00%
 *
 * 错题复盘（评测 2 次）：
 * 第一次提交“共有 3 组测试集，其中有 3 组测试结果不匹配”。
 * 对比失败代码：把用于逐位取模、整除的整数 n 声明成了 double，
 * 浮点上 %10、/10 取位不可靠，位数与含 2 个数统计错误；
 * 改为 long long 整数存储、逐位取模整除后第二次评测通过。
 * 提交记录截图：../../images/4212810-8_犯二程度_提交记录.png
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int ge, sg, len;
    long long n;
    cin >> n;
    len = 0;
    sg = 0;
    double per;
    double faner = 1.0;
    if (n < 0)
    {
        faner *= 1.5;
        n = -n;
    }
    if (n % 2 == 0)
        faner *= 2.0;
    while (n)
    {
        ge = n % 10;
        if (ge == 2)
            sg++;
        n = n / 10;
        len++;
    }
    per = ((double)sg / (double)len) * faner * 100;
    cout << fixed << setprecision(2) << per << "%" << endl;
    return 0;
}
