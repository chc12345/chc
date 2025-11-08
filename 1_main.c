//202510125125
//chc0210@foxmailcom
//陈惠聪
#include <stdio.h>
int main() 
{
    int arr[3][3];
    int i, j;

    // 输入
    for (i = 0; i < 3; i++) 
    {
        for (j = 0; j < 3; j++) 
        {
            scanf("%d", &arr[i][j]);
        }
    }

    // 输出（带空格）
    for (i = 0; i < 3; i++) 
    {
        for (j = 0; j < 3; j++) 
        {
            printf("%d", arr[i][j]);
            if (j < 2) printf(" ");  // 除最后一个数字外，其他加空格
        }
        printf("\n");
    }

    return 0;
}
