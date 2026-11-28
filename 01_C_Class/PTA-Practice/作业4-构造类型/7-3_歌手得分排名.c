/*
 * 7-3 歌手得分排名
 *
 * 题目要求：
 * 共有 n 个歌手进行了 m 轮比赛，每轮每个歌手获得一个得分。
 * 统计每个歌手的总得分，按总得分从大到小排序并输出。
 *
 * 输入格式：
 * 先输入两个正整数 n, m（1 < n, m ≤ 10），然后是 m 行输入，
 * 每行按次序（编号依次为 1 至 n）输入 n 个歌手在该轮的得分（不超过 100）。
 *
 * 输出格式：
 * 按总得分降序依次输出 n 行，每行是一个歌手的信息：rank score id。
 * 其中 id 是排序前该歌手的编号（从 1 开始），score 是编号为 id 的歌手的总得分，
 * rank 是排序后该歌手的名次（从 1 开始），每两个数据之间留一个空格。
 * 若两个歌手总得分相同则名次也相同（输出时按 id 小者优先）；
 * 否则后者的名次为其排序后的序号（从 1 开始）。
 *
 * 输入样例：
 * 3 2
 * 91 92 95
 * 98 95 94
 *
 * 输出样例：
 * 1 189 1
 * 1 189 3
 * 3 187 2
 */

#include <stdio.h>
int main(){
    int m,n;
    scanf("%d%d",&n,&m);
    int sum[11]={0};
    int id[11];
    for (int i=1;i<=n;i++)
        id[i]=i;
     for (int r=0;r<m;r++)
         for (int i=1;i<=n;i++){
             int s;
             scanf("%d",&s);
             sum[i]+=s;
         }
    for (int i=1;i<=n;i++){
        int pos=i;
        for (int j=i+1;j<=n;j++){
            int a=id[pos],b=id[j];
            if (sum[b]>sum[a]||(sum[b]==sum[a]&&b<a))
                pos=j;
        }
        int t=id[i];
        id[i]=id[pos];
        id[pos]=t;
    }
     for (int i=1;i<=n;i++){
         int rk=i;
         if (i>1&&sum[id[i]]==sum[id[i-1]])
             rk=rk-1;
         printf("%d %d %d\n",rk,sum[id[i]],id[i]);
     }
    return 0;
}
