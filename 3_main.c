//202510125125
//chc0210@foxmial.com
//陈惠聪
#include <stdio.h>
int main()
{
    int n, i = 2;
    scanf("%d",&n);
    int isPrime = 1;
    if (n <= 1 || n >= 50)
    {
        isPrime = 0;
    }
    else{
        while (i * i <= n)
        {
            if (n % i ==0)
            {
                isPrime = 0;
                break;
            }
            i++;
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
