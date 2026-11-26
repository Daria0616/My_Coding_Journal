

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
//第一次，尝试在函数一中输出
