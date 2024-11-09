#include <stdio.h>
void swap(int* x, int* y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
    return;
}
void bubble_sort(int* arr, int n)
{
    for(int i =0; i <n-1; i++)
    {
        for(int j = 0; j < n - i - 1; j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(&arr[j], &arr[j+1]);
            }
        }
    }
}

int main()
{
    int arr[] = {10,9,8,7,6,5};
    int* x = arr;
    printf("Before sorting: ");
    for(int i = 0; i<= 5; i++)
    {
        printf("%d ", arr[i]);

    }
    bubble_sort(x,6);
    printf("\nAfter sorting: ");
    for(int i = 0; i<= 5; i++)
    {
        printf("%d ", arr[i]);
    }
}