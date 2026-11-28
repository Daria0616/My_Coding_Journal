/*
 * 7-2 找出一组数据中最大的数和最小的数，并将它们的位置互换
 *
 * 题目要求：
 * 输入 10 个数，找出这组数据中最大的数和最小的数，并将它们的位置互换。
 *
 * 输入样例：
 * 1 3 6 11 -1 0 22 5 9 12
 *
 * 输出样例：
 * 交换后的数据:1 3 6 11 22 0 -1 5 9 12
 *
 */

#include <stdio.h>
int main(){
    int a[10];
    int t=0,j=0;
    for (int i=0;i<10;i++)
        scanf("%d",&a[i]);
    int max_val=a[0],min_val=a[0];
    for (int i=1;i<10;i++){
        if (a[i]>max_val){
            max_val=a[i];
            t=i;}
        else if (a[i]<min_val){
                min_val=a[i];
                j=i;}
    }
    int m=a[j];
    a[j]=a[t];
    a[t]=m;
    printf("交换后的数据:");
    for (int i=0;i<10;i++)
        printf("%d ",a[i]);
    printf("\n");
    return 0;
}
