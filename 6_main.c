//202510125125
//chc0210@foxmailcom
//陈惠聪
#include <stdio.h>
int main()
{
    int arr[5];
    int count = 0;
    // 读取 5 个整数
    for (int i = 0; i < 5; i++) 
    {
        int num;
        scanf("%d", &num);
        // 如果是偶数，存入数组
        if (num % 2 == 0) 
        {
            arr[count] = num;
            count++;
        }
    }
    // 输出结果
    for (int i = 0; i < count; i++) 
    {
        printf("%d", arr[i]);
        if (i < count - 1) 
        {
            printf(" ");
        }
    }
    printf("\n");
    return 0;
}
