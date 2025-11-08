//202510125125
//chc0210@foxmailcom
//陈惠聪
#include <stdio.h>
int main() 
{
    int arr[10];
    int i, j, temp;
    // 输入
    for (i = 0; i < 10; i++) 
    {
        scanf("%d", &arr[i]);
    }
    // 冒泡排序
    for (i = 0; i < 9; i++) 
    {
        for (j = 0; j < 9 - i; j++) 
        {
            if (arr[j] > arr[j + 1]) 
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // 输出
    for (i = 0; i < 10; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
