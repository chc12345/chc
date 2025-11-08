//202510125125
//chc0210@foxmailcom
//陈惠聪
#include <stdio.h>
// 反转数组元素位置
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
    int arr[5];
    for (int i = 0; i < 5; i++) 
    {
        scanf("%d", &arr[i]);
    }

    reverseArray(arr, 5);

    for (int i = 0; i < 5; i++) 
    {
        printf("%d", arr[i]);
        if (i < 4) printf(" ");
    }
    printf("\n");

    return 0;
}
