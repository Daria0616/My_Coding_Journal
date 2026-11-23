/*
 * 数字升序排序（课本 4_2）· 五种写法汇总（统一用 #define N 6）
 *
 * 题目要求：
 * 任意输入 N 个整数（N=6），按从小到大（升序）的顺序输出。
 * 只改 #define N 6 这一行，就能变成任意个数；五段都采用同样的输入输出格式，方便对比差异。
 *
 * 输入格式：输入 N 个整数，以空格隔开。
 * 输出格式：一行，升序输出这 N 个整数，数字之间用空格隔开。
 *
 * 输入样例：3 1 4 1 5 9
 * 输出样例：1 1 3 4 5 9
 *
 * ========== 五种写法对比 ==========
 * 编号 | 排序                  | 已固定区域       | 内层循环
 * 一   | 冒泡                  | 数组尾部         | j 从 0 到 N-i-1，比较相邻 a[j] 与 a[j+1]
 * 二   | 冒泡 = 标志位优化     | 数组尾部         | 同上；一趟没交换即已有序，提前结束
 * 三   | 选择（边比较边换）    | 数组头部         | j 从 i+1 到 N-1，比较固定位 a[i] 与 a[j]，遇小就换
 * 四   | 选择（找最小下标）    | 数组头部         | j 从 i+1 到 N-1，先记 minPos，一轮只交换一次
 * 五   | 插入                  | 数组前段（像插牌）| 把当前元素存临时变量，从 i-1 往前挪到合适位置
 *
 * ========== 看到代码怎么快速判断 ==========
 * 1. 比较的是相邻两个 a[j] 和 a[j+1]，就是冒泡。
 * 2. 比较的是固定位 a[i] 和后面的 a[j]，就是选择；再看循环里有没有“找下标”的动作，区分方法三和方法四。
 * 3. 有“先把当前元素存进临时变量，再往前挪”这个动作，就是插入。
 *
 * ========== 关于课本图的两点提醒 ==========
 * 1. 课本图里是 void main()，考试或 OJ 请统一写成 int main() 并 return 0。
 * 2. 如果要用课本的 C 风格：把 cin>>a[i] 换成 scanf("%d",&a[i])、cout<<a[i] 换成 printf("%5d",a[i])，
 *    头文件换成 <stdio.h>。
 *
 * ========== 五种写法特点 ==========
 * 方法一 冒泡法：相邻元素比较，逆序就交换，大数逐步沉到后面（交换次数多）。
 * 方法二 冒泡 flag 优化：一趟没有交换即已有序，提前 break。
 * 方法三 选择（边比边换）：a[i] 相当于“当前最小”候选人，一旦遇到更小就立刻交换；
 *        交换次数偏多，但最终 a[i] 一定是剩余部分的最小值（课本图常见写法）。
 * 方法四 选择（找最小下标）：每轮先找到最小值下标，最后只交换一次，交换次数最少；
 *        考试问“哪种交换次数最少”，就选这个。
 * 方法五 插入法：把当前元素往前插入到前面有序序列的合适位置（接近有序时较快）。
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

/* ========== 以下为其余四种方法，均为独立完整程序，按需取消注释使用 ==========

**方法二：冒泡排序（flag 优化版）**（一趟没交换即已有序，提前 break）
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

**方法三：选择排序（边比较边交换，课本图写法）**
#include <iostream>
using namespace std;
#define N 6
int main()
{
    int a[N], i, j, t;
    cout << "Input " << N << " numbers:\n";
    for (i = 0; i < N; i++)
        cin >> a[i];

    for (i = 0; i < N - 1; i++)                      // 头部逐个固定
        for (j = i + 1; j < N; j++)                  // 从 i 后面找更小的
            if (a[i] > a[j]) {
                t = a[i]; a[i] = a[j]; a[j] = t;     // 遇到更小就立刻交换
            }

    cout << "\nThe sorted numbers:\n";
    for (i = 0; i < N; i++)
        cout << a[i] << " ";
    cout << endl;
    return 0;
}

**方法四：选择排序（先找最小下标，一轮只换一次，交换次数最少）**
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
        for (j = i + 1; j < N; j++)                  // 从后面找真正的最小值下标
            if (a[j] < a[minPos])
                minPos = j;
        if (minPos != i) {                           // 最小值和第 i 个交换，一轮只换一次
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

**方法五：插入排序**（拿当前元素往前插到合适位置）
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
*/
