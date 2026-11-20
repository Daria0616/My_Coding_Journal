/*
 * 7-1 指定日期是该年的第几天
 *
 * 题目要求：
 * 编写一个能计算指定日期是该年第几天的程序：
 * 1. 按月累加天数；
 * 2. 判断是否为闰年。
 *
 * 输入格式：
 * 年 月 日
 *
 * 输入样例：
 * 2026 10 25
 *
 * 输出格式：
 * 某年某月某日是该年的第某天。
 *
 * 输出样例：
 * 2026年10月25日是该年的第298天。
 *
 * 说明：
 * 闰年判断规则：能被 4 整除但不能被 100 整除，或者能被 400 整除。
 */

/*
#include <iostream>
using namespace std;

int main()
{
    int year, month, day, sum = 0;
    cin >> year >> month >> day;

    switch (month - 1) {
        case 11: sum += 30;
        case 10: sum += 31;
        case  9: sum += 30;
        case  8: sum += 31;
        case  7: sum += 31;
        case  6: sum += 30;
        case  5: sum += 31;
        case  4: sum += 30;
        case  3: sum += 31;
        case  2:                                                                               //sum+=28;
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
                sum += 29;                                                                     //sum++;(后面无else语句)
            else
                sum += 28;
        case  1: sum += 31;
        case  0: break;
    }

    sum += day;
    cout << year << "年" << month << "月" << day << "日"<< "是该年的第" << sum << "天。" << endl;

    return 0;
}
*/

//**数组**/
#include <iostream>
using namespace std;
int main(){
    int arr[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    int year,month,day,sum=0;
    cin>>year>>month>>day;
    for(int i=1;i<month;i++){                                                 //累加月份天数(一定是i<month)
        sum+=arr[i];
    }
    sum+=day;
    if((year%4==0&&year%100!=0)||year%400==0){
        if(month>2){
            sum++;
        }
    }
    cout<<year<<"年"<<month<<"月"<<day<<"日"<< "是该年的第" << sum << "天。" << endl;
}

/*
#include <iostream>
using namespace std;
int main()
{
    int year, month, day, sum = 0;
    cin >> year >> month >> day;

    switch(month)
    {
        case 1: sum = 0; break;
        case 2: sum = 31; break;
        case 3: sum = 31+28; break;
        case 4: sum = 31+28+31; break;
        case 5: sum = 31+28+31+30; break;
        case 6: sum = 31+28+31+30+31; break;
        case 7: sum = 31+28+31+30+31+30; break;
        case 8: sum = 31+28+31+30+31+30+31; break;
        case 9: sum = 31+28+31+30+31+30+31+31; break;
        case 10: sum = 31+28+31+30+31+30+31+31+30; break;
        case 11: sum = 31+28+31+30+31+30+31+31+30+31; break;
        case 12: sum = 31+28+31+30+31+30+31+31+30+31+30; break;
    }

    // 如果是闰年，并且月份大于2月，多加1天
    if( (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0) )
        if(month > 2)
         sum += 1;
    sum += day;
    cout << year << "年" << month << "月" << day << "日" << "是该年的第" << sum << "天。" << endl;
    return 0;
}
*/