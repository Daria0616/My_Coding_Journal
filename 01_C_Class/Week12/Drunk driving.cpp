// 请在Begin-End之间添加你的代码，
//计算酒驾醉驾的总人数和百分比//	
/********** Begin *********/
#include <iostream>
using namespace std;
int Count(int arr[]){
    int sum=0;
    for (int i=0;i<10;i++)
      if (arr[i]>=20)
         sum++;
    return sum;
}
int main(){
    int arr[10];
    for (int i=0;i<10;i++)
        cin>>arr[i];
    int sum=Count(arr);
    cout<<"sum="<<sum<<",ratio="<<sum*100/10<<"%"<<endl;
    return 0;
}






/********** End **********/