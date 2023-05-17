#include <stdio.h>

void ascending_Order_Arr(int *arr, int n);

int main()
{
    int arr[3];
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &arr[i]);
    }
    ascending_Order_Arr(arr, 3);

    return 0;
}

void ascending_Order_Arr(int *arr, int n)
{
    // 冒泡排序
    //  i 控制轮数
    for (int i = 0; i < n - 1; i++)
    {
        // j 控制次数
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                arr[j] ^= arr[j + 1];
                arr[j + 1] ^= arr[j];
                arr[j] ^= arr[j + 1];
            }
        }
    }

    for (int k = 0; k < n; k++)
    {
        printf("%d ", arr[k]);
    }
}
