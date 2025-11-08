//202510125125
//chc0210@foxmailcom
//陈惠聪
#include <stdio.h>
// 计算 a 的 b 次幂
int power(int a, int b) 
{
    int result = 1;
    for (int i = 0; i < b; i++) 
    {
        result *= a;
    }
    return result;
}

int main() 
{
    int sum = 0;
    for (int i = 1; i <= 5; i++) 
    {
        sum += power(i, 2);  // 计算 i 的平方并累加到 sum
    }
    printf("%d\n", sum);
    return 0;
}
