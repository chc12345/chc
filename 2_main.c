//202510125125
//chc0210@foxmail
//陈惠聪
#include <stdio.h>
int main()
{
    int i, a, b, c, flag = 0;
    for (i = 100; i <= 999; i++)
    {
        a = i / 100;
        b = (i / 10) % 10;
        c = i % 10;
        if (a*a*a +b*b*b +c*c*c == i)
        {
            if (flag)printf("");
            printf("%d", i);
            flag = 1;
        }
    }
    printf("\n");
    return 0;
}
