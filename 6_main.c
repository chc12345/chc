//202510125125
//chc0210@foxmailcom
//陈惠聪
#include <stdio.h>
int main()
{
    int arr[5];
    int count = 0;
    while (count < 5)
    {
        int num;
        scanf("%d", &num);
        if (num % 2 == 0)
        {
            arr[count++] = num;
        }
    }
    //输出
    for (int i = 0; i < 5; i++)
    {
        printf("%d",arr[i]);
        if (i < 4) printf("");
    }
    return 0;
}
