/*
 * 0-9 逆序输出（课本4_1_3）
 * 题目要求：
 * 将 0~9 这十个整数依次存入数组，再按逆序（9 到 0）输出，数字之间用空格隔开。
 * 输入格式：无输入。
 * 输出格式：一行，逆序输出 9 8 7 6 5 4 3 2 1 0，数字之间用空格隔开。
 * 输出样例： 9 8 7 6 5 4 3 2 1 0
 */

#include <iostream>
using namespace std;
int main(){
    int a[10];
    for (int i=0;i<10;i++)
        a[i]=i;
    for (int i=9;i>=0;i--)                   //for (int i=0;i<10;i++) cout<<a[9-i]<<" "; 也可
        cout<<a[i]<<" ";
    cout<<"\n";
    return 0;
}

/*推广：输入10个数，并以输入时相反的顺序输出这10个数
**方法一：逆序遍历法**
#include <iostream>
#define N 10
using namespace std;
int main(){
    int a[N];
    cout<<"Input "<<N<<" numbers:\n";
    for (int i=0;i<N;i++)
        cin>>a[i];                                           //cin>>a[N-1-i]; 反序存放也可     输出时用for (int i=0;i<N;i++)   cout<<a[i]<<" ";
    cout<<"The numbers in reverse order:\n";
    for (int i=N-1;i>=0;i--)
        cout<<a[i]<<" ";
    cout<<"\n";
    return 0;
}
**方法二：首尾交换法**
#include <iostream>
#define N 10
using namespace std;
int main(){
    int a[N],t;
    cout<<"Input 10 numbers:\n";
    for (int i=0;i<N;i++)
        cin>>a[i];
    cout<<"The numbers in reverse order:\n";
    for (int i=0;i<N/2;i++){
        t=a[i];
        a[i]=a[N-1-i];                                         //交换
        a[N-1-i]=t;
    }
    for (int i=0;i<N;i++)
        cout<<a[i]<<" ";
    cout<<"\n";
    return 0;
}
*/