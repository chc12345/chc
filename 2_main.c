//202510125125
//chc0210@foxmail
//陈惠聪
#include <stdio.h>
int main() 
{
    int num;
    int first = 1;  // 标记是否是第一个输出的数
    for (num = 100; num <= 999; num++) 
    {
        int a = num / 100;
        int b = (num / 10) % 10;
        int c = num % 10;

        if (a*a*a + b*b*b + c*c*c == num) 
        {
            if (!first) 
            {
                printf(" ");  // 不是第一个数时，先输出空格
            }
            printf("%d", num);
            first = 0;  // 第一个数已输出，之后都加空格
        }
    }
    printf("\n");  // 最后换行

    return 0;
}
