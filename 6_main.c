//202510125125
//chc0210@foxmailcom
//陈惠聪
#include <stdio.h>

int main() 
{
    int arr[5];
    int count = 0;

    for (int i = 0; i < 5; i++) 
    {
        int num;
        printf("请输入第 %d 个数: ", i + 1);
        scanf("%d", &num);

        // 如果是奇数，提示重新输入
        while (num % 2 != 0) {
            printf("请输入偶数: ");
            scanf("%d", &num);
        }

        arr[count] = num;
        count++;
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
