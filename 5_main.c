//202510125125
//chc0210@foxmail
//陈惠聪
#include <stdio.h>
int main() 
{
    int arr[5];
    int sum = 0;
    // 输入前四位
    for (int i = 0; i < 4; i++)
     {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    // 最后一位为前四位的和
    arr[4] = sum;

    // 输出数组
    for (int i = 0; i < 5; i++) 
    {
        if (i > 0) 
        {
            printf(" ");
        }
        printf("%d", arr[i]);
    }

    return 0;
}
