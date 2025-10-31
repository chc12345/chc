//202510125125
//chc0210@foxmail
//陈惠聪
#include <stdio.h>
int main()
{
    int count = 0;
    for (int num = 100; num <= 999; num++)
    {
        int hundreds = num / 100;
        int tens = (num / 10) % 10;
        int units = num % 10;
        if (num == hundreds*hundreds*hundreds + tens*tens*tens + units*units*units)
        {
            if (count > 0)
            {
                printf("");
            }
            printf("%d",num);
            count++;
        }
    }
    return 0;
}
