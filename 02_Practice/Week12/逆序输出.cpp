/*
 * 逆序输出（课本 4_1_3）
 *
 * 题目要求：
 * 将 0~9 这十个整数依次存入数组，再按逆序（9 到 0）输出，数字之间用空格隔开。
 *
 * 输入格式：无输入。
 * 输出格式：一行，逆序输出 9 8 7 6 5 4 3 2 1 0，数字之间用空格隔开。
 *
 * 输出样例：
 * 9 8 7 6 5 4 3 2 1 0
 *
 * 推广（下方注释块内）：输入 N 个整数，按输入时相反的顺序输出。
 * 方法一 逆序遍历法：数组原样存储，从末尾向前遍历输出，不改动元素位置。
 * 方法二 首尾交换法：借助临时变量把首尾元素两两交换，将数组就地反转后再正序输出。
 */

#include <iostream>
using namespace std;

int main(){
    int a[10];
    for (int i=0;i<10;i++)
        a[i]=i;
    for (int i=9;i>=0;i--)              // 也可正序下标反向取数：for (i=0;i<10;i++) cout<<a[9-i]<<" ";
        cout<<a[i]<<" ";
    cout<<"\n";
    return 0;
}

/* ========== 推广：输入 N 个整数，逆序输出。以下为独立完整程序，按需取消注释 ==========

**方法一：逆序遍历法**（数组原样存储，从末尾向前输出，不交换元素）
#include <iostream>
#define N 10
using namespace std;
int main(){
    int a[N];
    cout<<"Input "<<N<<" numbers:\n";
    for (int i=0;i<N;i++)
        cin>>a[i];                       // 也可读入时反序存放：cin>>a[N-1-i]; 输出时正序遍历 a[i]
    cout<<"The numbers in reverse order:\n";
    for (int i=N-1;i>=0;i--)
        cout<<a[i]<<" ";
    cout<<"\n";
    return 0;
}

**方法二：首尾交换法**（首尾对称交换，把数组就地反转后正序输出）
#include <iostream>
#define N 10
using namespace std;
int main(){
    int a[N],t;
    cout<<"Input "<<N<<" numbers:\n";
    for (int i=0;i<N;i++)
        cin>>a[i];
    cout<<"The numbers in reverse order:\n";
    for (int i=0;i<N/2;i++){
        t=a[i];
        a[i]=a[N-1-i];                   // 交换首尾对称元素
        a[N-1-i]=t;
    }
    for (int i=0;i<N;i++)
        cout<<a[i]<<" ";
    cout<<"\n";
    return 0;
}
*/
