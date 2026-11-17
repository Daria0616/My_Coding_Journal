// 请在Begin-End之间添加你的代码，
//n个月后（每月按30天算,n>0），校园贷需要还款多少？//	
/********** Begin *********/
#include <iostream>
using namespace std;
double RePay(int month){
    double money=10000*0.008*30*month;
    return money+10000;
}
int main(){
    int month;
    cin>>month;
    cout<<"return="<<RePay(month)<<endl;
    return 0;
}






/********** End **********/