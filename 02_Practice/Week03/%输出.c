#include <stdio.h>

int main(void)
{
    int num_int = 12;
    int num_neg = -12;
    unsigned int num_u = 12;

    long num_ld = 1234L;
    long num_ld_neg = -1234L;
    unsigned long num_lu = 1234UL;

    long long num_lld = 56789LL;
    long long num_lld_neg = -56789LL;
    unsigned long long num_llu = 56789ULL;

    printf("======= int 系列 =======\n");
    printf("|%6d|   %%6d 右对齐\n", num_int);
    printf("|%-6d|  %%6d 左对齐\n", num_int);
    printf("|%+6d|  %%+6d 强制带正负号\n", num_int);
    printf("|% 6d|  %% 6d 正数留空格，负数显示负号\n", num_int);
    printf("|%6d|   负数测试\n", num_neg);
    printf("|%u|    %%u 无符号int\n", num_u);

    printf("\n======= long 系列 (%%ld / %%lu) =======\n");
    printf("|%8ld|  %%8ld long\n", num_ld);
    printf("|%+8ld| %%+8ld long带符号\n", num_ld_neg);
    printf("|%8lu|  %%8lu unsigned long\n", num_lu);

    printf("\n======= long long 系列 (%%lld / %%llu) =======\n");
    printf("|%10lld|  %%10lld long long\n", num_lld);
    printf("|%+10lld| %%+10lld long long带符号\n", num_lld_neg);
    printf("|%10llu|  %%10llu unsigned long long\n", num_llu);

    printf("\n======= 易错坑：负数给无符号格式 =======\n");
    printf("|%u|  int负数用%%u：%d -> %u\n", num_neg, num_neg);
    printf("|%lu| long负数用%%lu：%ld -> %lu\n", num_ld_neg, num_ld_neg);

    return 0;
}