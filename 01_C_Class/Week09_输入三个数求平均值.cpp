/*
 * 题目名称：输入三个数求平均值
 * 核心思路：读入三个整数，以 3.0 参与除法并使用 fixed 与 setprecision 保留两位小数。
 * 踩坑记录：除以整数 3 会执行整数除法；格式化输出前需要包含 <iomanip>。
 */
#include <iostream>
#include <iomanip>
using namespace std;
int   main( )
{
   int num1,num2,num3;
   float average;
   cout<<"Please input three numbers: ";
   cin>>num1>>num2>>num3;
   average=(num1+num2+num3)/3.0;
   cout<<fixed<<setprecision(2)<<average<<endl;
}
