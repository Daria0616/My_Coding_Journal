// 请在Begin-End之间添加你的代码，
//计算个人年所得税，保留小数点后2位//	
/********** Begin *********/
#include <iostream>
#include <iomanip>
using namespace std;
float Tax(int income){
    int start=income-60000;
    if (start<=0)
       return 0;
    else if(start<=36000)
       return start*0.03;
    else if(start<=144000)
       return start*0.1-2520;
    else if(start<=300000)
       return start*0.2-16920;
    else if(start<=420000)
       return start*0.25-31920;
    else if(start<=660000)
       return start*0.3-52920;
    else if(start<=960000)
       return start*0.35-85920;
    else
       return start*0.45-181920;
}
int main(){
    int income;
    cin>>income;
    float tax=Tax(income);
    cout<<"tax="<<fixed<<setprecision(2)<<tax<<endl;
    return 0;
}






/********** End **********/