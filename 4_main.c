//202510125125
//chc0210@foxmail.com
//陈惠聪
#include <stdio.h>
int main() 
{
    int num = 100;
    int first = 1;  // 标记是否是第一个输出的数
    while (num <= 999) 
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
        num++;
    }
    printf("\n");  // 最后换行

    return 0;
}
