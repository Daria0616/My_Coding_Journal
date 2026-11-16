/*
 * 题目名称：C++ 字符串常用构造
 * 核心思路：演示 std::string 的默认、复制、截取、C 字符串和重复字符构造方式。
 * 踩坑记录：substr 的参数是起始位置和长度；构造对象后可直接使用 cout 输出。
 */
#include <iostream>
#include <string>
int main()
{
    using namespace std;
    string str1;
    string str2="Hello,World!";
    string str3=str2;
    string str4=str2.substr(0,5);
    const char*charArray="Hello";
    string str5(charArray);
    string str6(5,'A');
    cout<<"str1:"<<str1<<endl;
    cout<<"str2:"<<str2<<endl;
    cout<<"str3:"<<str3<<endl;
    cout<<"str4:"<<str4<<endl;
    cout<<"str5:"<<str5<<endl;
    cout<<"str6:"<<str6<<endl;
    return 0;
}
