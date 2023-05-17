#include <stdio.h>
// 传递数组地址
void change_arr_1(int (*arr)[10], int n);
// 传递数组名
void change_arr_2(int *p, int n);
int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // change_arr_1(&arr, 10);
    change_arr_2(arr, 10);
    return 0;
}

void change_arr_1(int (*arr)[10], int n)
{
    int temp = 0;
    for (int i = 0; i < n / 2; i++)
    {
        temp = *(*arr + i);
        *(*arr + i) = *(*arr + n - i - 1);
        *(*arr + n - i - 1) = temp;
    }

    for (int j = 0; j < n; j++)
    {
        printf("%d ", *(*arr + j));
    }
}

void change_arr_2(int *p, int n)
{
    int temp = 0;
    for (int i = 0; i < n / 2; i++)
    {
        temp = *(p + i);
        *(p + i) = *(p + n - i - 1);
        *(p + n - i - 1) = temp;
    }
    for (int j = 0; j < n; j++)
    {
        printf("%d ", p[j]);
        // printf("%d ", *(p + j));
    }
}
