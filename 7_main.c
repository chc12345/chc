//202510125125
//chc0210@foxmail.com
//陈惠聪
#include <stdio.h>
int main()
{
    int arr[5];
    //输入前四位
    for (int i = 0; i < 4; i++)
    {
        scanf("%d", &arr[i]);
    }
    //数组后移一位
    for (int i = 3; i >= 00; i--)
    {
        arr[i + 1] = arr[i];
    }
    //首位补 0
    arr[0] = 0;
    //输出
    for (int i = 0; i < 5; i++)
    {
        printf("%d",arr[i]);
        if (i < 4)
        printf("");
    }
    return 0;
}
