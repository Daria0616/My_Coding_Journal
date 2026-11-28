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