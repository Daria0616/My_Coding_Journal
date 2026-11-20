/*

 * 任意输入6个整数，按从小到大的顺序输出。（课本4_2）
 */
/*
#include <iostream>
using namespace std;
int main(){
    int a[6],i,j,t;
    cout<<"Input 6 numbers:\n";
    for (i=0;i<6;i++)
        cin>>a[i];
    for (i=1;i<=5;i++)
        for (j=0;j<5-i;j++)
            if (a[j]>a[j+1]){                  //比较
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;                      //交换
            }
    cout<<"\nThe sorted numbers:\n";
    for (i=0;i<6;i++)
        cout<<a[i]<<" ";
    cout<<endl;
    return 0;
}
*/

//算法改进
#include <iostream>
using namespace std;
int main(){
    int a[6],i,j,t;
    cout<<"Input 6 numbers:\n";
    for (i=0;i<6;i++)
        cin>>a[i];
    for (i=1;i<=5;i++){
        int flag=0;                                 //设置标志位
        for (j=0;j<6-i;j++)
            if (a[j]>a[j+1]){                       //比较
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;                           //交换
                flag=1;                             //有交换，标志位置1
            }
        if (flag==0) 
            break;                                  //若没有交换，说明已经排好序
    }
    cout<<"\nThe sorted numbers:\n";
    for (i=0;i<6;i++)
        cout<<a[i]<<" ";
    cout<<endl;
    return 0;
}