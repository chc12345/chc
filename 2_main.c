//202510125125
//chc0210@foxmail
//陈惠聪
#include <stdio.h>
int main() 
{
    int n, i, is_prime = 1; 
    scanf("%d", &n);
    for (i = 2; i < n; i++) 
    {
        if (n % i == 0)
         {
            is_prime = 0; 
            printf("密钥不安全，请重新输入");
            break;
        }
    }
    if(is_prime == 1)
    {
     printf("密钥安全，密码设置成功");
    }
    if (n == 1)
    {
     printf("密钥不安全，请重新输入");
    }
    return 0;
}
