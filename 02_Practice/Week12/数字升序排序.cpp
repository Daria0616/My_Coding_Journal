/*
 * 数字升序排序（课本 4_2）
 *
 * 题目要求：
 * 任意输入 N 个整数（N=6），按从小到大（升序）的顺序输出。
 *
 * 输入格式：输入 N 个整数，以空格隔开。
 * 输出格式：一行，升序输出这 N 个整数，数字之间用空格隔开。
 *
 * 输入样例：3 1 4 1 5 9
 * 输出样例：1 1 3 4 5 9
 *
 * 三种基础排序方法：
 * 方法一 冒泡法：相邻元素比较，逆序就交换，大数逐步沉到后面（交换次数多）
 * 方法二 选择法：每轮先找到最小值，换到当前最前面（一轮只换一次，交换最少）
 * 方法三 插入法：把当前元素往前插入到前面有序序列的合适位置（接近有序时较快）
 * 附：flag 优化冒泡——一趟没有交换即已有序，提前结束。
 */

#include <iostream>
using namespace std;
#define N 6

// ========== 方法一：冒泡排序（基础版） ==========
int main()
{
    int a[N], i, j, t;
    cout << "Input " << N << " numbers:\n";
    for (i = 0; i < N; i++)
        cin >> a[i];

    // 外层：一共 N-1 趟
    for (i = 1; i < N; i++)
        // 内层：相邻比较，后面 i 个已经排好，不用再比
        for (j = 0; j < N - i; j++)
            if (a[j] > a[j+1]) {
                t = a[j];
                a[j] = a[j+1];
                a[j+1] = t;
            }

    cout << "\nThe sorted numbers:\n";
    for (i = 0; i < N; i++)
        cout << a[i] << " ";
    cout << endl;
    return 0;
}

/* ========== 以下为其余方法，均为独立完整程序，按需取消注释使用 ==========

**方法二：选择排序**（每轮找最小值，最后只交换一次）
#include <iostream>
using namespace std;
#define N 6
int main()
{
    int a[N], i, j, t, minPos;
    cout << "Input " << N << " numbers:\n";
    for (i = 0; i < N; i++)
        cin >> a[i];

    for (i = 0; i < N - 1; i++) {
        minPos = i;                                  // 先假设第 i 个最小
        for (j = i + 1; j < N; j++)                  // 从后面找真正的最小值位置
            if (a[j] < a[minPos])
                minPos = j;
        if (minPos != i) {                           // 最小值和第 i 个交换
            t = a[i];
            a[i] = a[minPos];
            a[minPos] = t;
        }
    }

    cout << "\nThe sorted numbers:\n";
    for (i = 0; i < N; i++)
        cout << a[i] << " ";
    cout << endl;
    return 0;
}

**方法三：插入排序**（拿当前元素往前插到合适位置）
#include <iostream>
using namespace std;
#define N 6
int main()
{
    int a[N], i, j, t;
    cout << "Input " << N << " numbers:\n";
    for (i = 0; i < N; i++)
        cin >> a[i];

    for (i = 1; i < N; i++) {
        t = a[i];                                    // 把当前元素拿出来
        j = i - 1;
        while (j >= 0 && a[j] > t) {                 // 前面比它大的往后挪
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = t;                                  // 插入到正确位置
    }

    cout << "\nThe sorted numbers:\n";
    for (i = 0; i < N; i++)
        cout << a[i] << " ";
    cout << endl;
    return 0;
}

**附：flag 优化冒泡**（一趟没交换即已有序，提前 break）
#include <iostream>
using namespace std;
#define N 6
int main()
{
    int a[N], i, j, t;
    cout << "Input " << N << " numbers:\n";
    for (i = 0; i < N; i++)
        cin >> a[i];

    for (i = 1; i < N; i++) {
        int flag = 0;                                // 标志位：本趟有没有发生交换
        for (j = 0; j < N - i; j++)
            if (a[j] > a[j+1]) {
                t = a[j];
                a[j] = a[j+1];
                a[j+1] = t;
                flag = 1;                            // 有交换，标志位置 1
            }
        if (flag == 0) break;                        // 一趟没交换，已经有序，提前结束
    }

    cout << "\nThe sorted numbers:\n";
    for (i = 0; i < N; i++)
        cout << a[i] << " ";
    cout << endl;
    return 0;
}
*/
