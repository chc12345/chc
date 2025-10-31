//202510125125
//chc0210@foxmail.com
//陈惠聪
#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int isPrime = 1;
    if (n <= 1)
    {
        isPrime = 0;
    }
    else{
        for (int i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                isPrime = 0;
                break;
            }
        }
    }
    if (isPrime)
    {
        printf("密钥安全，密码设置成功\n");
    }
    else{
        printf("密钥不安全，请重新输入\n");
    }
    return 0;

}
