//202510125125
//chc0210@foxmailcom
//陈惠聪
#include <stdio.h>
// 反转数组元素
void reverseArray(int arr[], int length) 
{
    int i, j, temp;
    for (i = 0, j = length - 1; i < j; i++, j--) 
    {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}

int main() 
{
    int arr[5] = {1, 2, 3, 4, 5};  // 固定输入为 1 2 3 4 5

    reverseArray(arr, 5);

    for (int i = 0; i < 5; i++) 
    {
        printf("%d", arr[i]);
        if (i < 4) printf(" ");  // 除最后一个元素外，其他加空格
    }
    printf("\n");

    return 0;
}
