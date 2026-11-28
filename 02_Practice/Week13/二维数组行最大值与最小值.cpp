/*题目1：二维数组行最大值与最小值
给定一个 m×n 的整型二维数组，要求：
1. 写函数 void rowMax(int a[][100], int m, int n, int res[])，把每行最大值存入 res；
2. 写函数 int minOfArray(int b[], int len)，求 res 中的最小值并返回；
3. 在 main 中输入 m、n 和数组元素，输出每行最大值及这些最大值中的最小值。
要求：处理 m<=0、n<=0、m>100、n>100 的非法输入；测试全负数、单行、单列、重复最大值各一组。
*/
#include <iostream>  
using namespace std;

void rowMax(int a[][100], int m, int n, int res[]){
    for (int i = 0; i < m; i++){
        res[i] = a[i][0];          
        for (int j = 1; j < n; j++) {
            if (a[i][j] > res[i])      
                res[i] = a[i][j];
        }
    }
}
   
int minOfArray(int b[], int len){
        int min_val = b[0];
        for (int i = 1; i < len; i++)
            if (b[i] < min_val)
                min_val = b[i];              
        return min_val;
}

int main(){
    int m, n, min_val;
    int arr[100][100];
    int res[100];                          
    cin >> m >> n;
    if (m <= 0 || n <= 0 || m > 100 || n > 100) {
         cout << "Invalid Input!" << endl;
         return 0;
     }
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cin >> arr[i][j];
    rowMax(arr, m, n, res);
    for (int i = 0; i < m; i++) 
        cout << res[i] << " ";            
    min_val = minOfArray(res, m);                  
    cout <<endl<< min_val << endl;
    return 0;                  
}
/*
测试用例与预期输出：
1. 全负数（2×3）
   输入：
   2 3
   -1 -5 -3
   -2 -4 -6
   输出：
   -1 -2
   -2
2. 单行（1×4）
   输入：
   1 4
   3 1 4 2
   输出：
   4
   4
3. 单列（3×1）
   输入：
   3 1
   5
   2
   8
   输出：
   5 2 8
   2
4. 重复最大值（2×2）
   输入：
   2 2
   7 7
   3 7
   输出：
   7 7
   7
5. 非法输入 m<=0：输入 0 3，输出 Invalid Input!
6. 非法输入 n>100：输入 2 101，输出 Invalid Input!
*/
