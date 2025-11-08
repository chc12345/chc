//202510125125
//chc0210@foxmailcom
//陈惠聪
#include <stdio.h>
// 计算等差数列的和
int sumArithmetic(int a1, int an, int step) 
{
    int n = (an - a1) / step + 1;
    return n * (a1 + an) / 2;
}

int main() 
{
    int result = sumArithmetic(1, 100, 1);
    printf("%d\n", result);
    return 0;
}
