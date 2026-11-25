/*
 * 3 指针排序（实验八 第3关，实训 4212816）
 *
 * 题目要求：
 * 编写程序，通过指针将三个数按从小到大的顺序排序。在 sort 函数中，
 * 交换形参指针 p1、p2、p3 所指向变量的值，使实参 a、b、c 跟随改变。
 * 提示：三个数两两比较排序（p1 与 p2、p1 与 p3、p2 与 p3）。
 *
 * 测试输入：12 41 8
 * 预期输出：8,12,41
 *
 * 练习卷：Begin-End 之间留空，请自行补全。
 */

#include <iostream>
using namespace std;
int sort(int * p1,int * p2,int * p3)
{
    int t;
    // 请在Begin-End之间添加你的代码，
    //将*p1，*p2，*p3按从小到大顺序排序 //
    /********** Begin *********/


    /********** End **********/
    return 0;
}
int main()
{
    int a,b,c,* pointer_1,* pointer_2,* pointer_3;
    pointer_1=&a;
    pointer_2=&b;
    pointer_3=&c;
    cin>>a>>b>>c;
    sort(pointer_1,pointer_2,pointer_3);
    cout<<* pointer_1<<","<<* pointer_2<<","<<* pointer_3<<endl;
    return 0;
}
