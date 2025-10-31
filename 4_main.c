//202510125125
//chc0210@foxmail.com
//陈惠聪
#include <stdio.h>
int main()
{
    int i = 100, a, b, c, flag = 0;
    while (i <= 999)
    {
        a = i / 100;
        b = (i / 10) % 10;
        c = i % 10;
        if(a*a*a + b*b*b + c*c*c == i)
        {
            if (flag) printf("");
            printf("%d", i);
            flag = 1;
        }
        i++;
    }
    printf("\n");
    return 0;
}
