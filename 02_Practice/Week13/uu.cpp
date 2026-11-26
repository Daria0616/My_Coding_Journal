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
    while(s[0]=='\n'){
        fgets(s,100,stdin);  //处理首行为空的情况
    }
    int k=0;
    while(s[k]!='\0'){
        if(s[k]=='\n'){
            s[k]='\0';  //处理末尾换行符
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