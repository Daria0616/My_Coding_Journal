/*
 * 题目名称：胡萝卜数量加二
 * 核心思路：读入整数，将数量加 2 后输出。
 * 踩坑记录：cin 之前必须先声明变量；输入内容需要符合整数格式。
 */
#include <iostream>
using namespace std;
int main()
{
	int carrots;
	cout << "How many carrots do you have?" << endl;
	cin >> carrots;
	carrots = carrots + 2;
	cout << "Here are two more.Now you have " << carrots << " carrots." << endl;
	return 0;
}
