//202510125125
//chc0210@foxmail.com
//陈惠聪
#include <stdio.h>
int main() 
{
    int arr[5];
    int i;

    // 输入前4位学号
    for (i = 0; i < 4; i++) 
    {
        scanf("%d", &arr[i]);
    }

    // 整体后移一位
    for (i = 3; i >= 0; i--) 
    {
        arr[i + 1] = arr[i];
    }

    // 第1位补0
    arr[0] = 0;

    // 输出数组
    for (i = 0; i < 5; i++) 
    {
        if (i > 0) {
            printf(" ");
        }
        printf("%d", arr[i]);
    }

    return 0;
}
