/*
 * 题目名称：反转输出整数
 * 核心思路：反复取出末位数字并输出，同时不断除以 10，直到数字归零。
 * 踩坑记录：负数需要先输出负号再转为正数；do-while 能保证输入 0 时仍输出 0。
 */
#include <iostream>
int main()
{
	using namespace std;
	int i, r;
	cout << endl << "Input an integer:" ;
	cin >> i;
	if (i < 0)
	{
		cout << "-";
		i = -i;
	}
	do
	{
		r = i % 10;
		cout << r;
	} while ((i = i / 10) != 0);
	cout << endl;
}
