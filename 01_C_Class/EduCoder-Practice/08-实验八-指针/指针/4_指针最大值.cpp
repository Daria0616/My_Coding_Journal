/*
 * 4 指针最大值（实验八 第4关，实训 4212816）
 *
 * 题目要求：
 * 编写程序，计算指针所指数组的最大值及其下标。在 fun(int *s, int t, int &k) 中：
 *   s 为数组首地址，t 为数组长度，k 用于保存最大值的下标。
 * 提示：先令 max=*s；遍历数组，当 *(s+i)>max 时更新 max，并把下标 i 存入 k。
 *
 * 测试输入：
 *   10
 *   776 675 896 101 301 401 980 431 451 777
 * 预期输出：最大元素下标：6,最大元素：980
 *
 * 练习卷：Begin-End 之间留空，请自行补全。
 */

#include <iostream>
using namespace std;
int fun(int *s, int t, int &k)
{
    // 请在Begin-End之间添加你的代码，
    //计算指针s所指数组的最大值，及其在数组中的下标 //
    //最大元素的下标保存到k//
    /********** Begin *********/


    /********** End **********/
}
int main()
{
    int a[10] , i , n , p;
    cout << "please input number:" ;
    cin >> n ;
    cout <<endl << n << " integers:" << endl ;
    for(i=0 ; i<n ; i++)
        cin >> a[i] ;
    fun( a , n , p ) ;
    cout <<"最大元素下标：" << p << ','
         <<"最大元素：" << a[p] << endl;
    return 0;
}
