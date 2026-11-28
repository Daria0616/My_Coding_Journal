/*题目2：字符串处理函数
写函数 int strAnalyze(char s[], int cnt[])，统计字符串中英文字母、数字、空格和其他字符的个数，分别存入 cnt[0]～cnt[3]，返回字符串长度。在 main 中输入一行字符串（可含空格），调用函数并输出四类字符个数和长度。
要求：用 fgets 读入并处理末尾换行；测试空串、全空格、含数字字母混合、含标点各一组；不要用全局变量。
*/
#include <stdio.h>
int strAnalyze(char s[],int cnt[]){
    int i=0;
    while(s[i]!='\0'){
        if((s[i]>='A'&&s[i]<='Z')||(s[i]>='a'&&s[i]<='z')) 
          cnt[0]++;
        else if(s[i]>='0'&&s[i]<='9') 
             cnt[1]++;
        else if(s[i]==' ') 
             cnt[2]++;
        else 
             cnt[3]++;
        i++;
    }
    return i;
}
int main(){
    char s[100];
    fgets(s,100,stdin);
    int k=0;
    while(s[k]!='\0'){
        if(s[k]=='\n'){
            s[k]='\0';  
            break;
        }
        k++;
    }
    int cnt[4]={0};
    int len=strAnalyze(s, cnt);
    for(int i=0; i<4; i++){
        printf("%d ", cnt[i]);
    }
    printf("\n%d\n", len);
    return 0;
}
/*
输出顺序：cnt[0] 字母、cnt[1] 数字、cnt[2] 空格、cnt[3] 其他，最后一行是长度。

测试用例与预期输出：
1. 空串：直接回车 → 0 0 0 0，长度 0
2. 全空格（7 个空格）→ 0 0 7 0，长度 7
3. 数字字母混合：Abc123 Xy → 5 3 1 0，长度 9
   （字母 A b c X y 共 5，数字 1 2 3 共 3，空格 1，其他 0）
4. 含标点：Hello,./ 98 → 5 2 1 3，长度 11
   （字母 H e l l o 共 5，数字 9 8 共 2，空格 1，其他 , . / 共 3）
*/
