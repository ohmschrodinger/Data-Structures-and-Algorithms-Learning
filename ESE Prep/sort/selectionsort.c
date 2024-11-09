#include <stdio.h>
#include <stdbool.h>

void swap(int* x, int* y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void selection_sort(int* arr, int n)
{
    for(int i = 0; i< n-1; i++)
    {
        int min_index = i;
        for(int j = i+1; j< n; j++)
        {
            if(arr[j] < arr[min_index])
            {
                min_index = j;
            }
        }
        if(min_index!=i)
        {
        swap(&arr[i], &arr[min_index]);
        }
    }
}

int main()
{
    int arr[] = {5,4,3,2,1};
    int* x= arr;
    printf("Before sorting: ");
    for(int i=0; i< 5; i++)
    {
        printf("%d ", arr[i]);
    }
    selection_sort(x,5);
    printf("\nAfter sorting: ");
    for(int i=0; i< 5; i++)
    {
        printf("%d ", arr[i]);
    }
}