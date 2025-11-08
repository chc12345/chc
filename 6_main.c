//202510125125
//chc0210@foxmailcom
//陈惠聪
#include <stdio.h>
// 计算数组元素的和
int sum(int arr[], int n) 
{
    int s = 0;
    for (int i = 0; i < n; i++) 
    {
        s += arr[i];
    }
    return s;
}

// 计算数组元素的积
int product(int arr[], int n) 
{
    int p = 1;
    for (int i = 0; i < n; i++) 
    {
        p *= arr[i];
    }
    return p;
}

int main() 
{
    int arr[5];
    for (int i = 0; i < 5; i++) 
    {
        scanf("%d", &arr[i]);
    }
    printf("%d %d\n", sum(arr, 5), product(arr, 5));
    return 0;
}
