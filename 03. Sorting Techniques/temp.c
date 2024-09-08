#include <stdio.h>

void swap(int* x, int* y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
    return;
}

int partition(int arr[], int low, int high)
{
    int pivot = arr[low];

    int i = low;
    int j = high;

while(i<=high && j>= low)
{
    while(pivot > arr[i])
    {
        i++;
    }

    while(pivot < arr[j])
    {
        j--;
    }

    if(i<j)
    {
        swap(&arr[i],&arr[j]);
    }

    else if(j<i)
    {
        swap(&arr[j], &pivot);
    }
}
    return j;
}

void quick_sort(int arr[] , int low, int high)
{

    if(low<high)
    {
         int j = partition(arr, low, high);
         quick_sort(arr,low, j - 1);
         quick_sort(arr, j+1 , high);
    }

}

int main()
{
    int arr[10] = {2,4,3,9,1,4,8,7,5,6};
    quick_sort(arr,0,9);
    for(int i = 0; i<=9 ;i ++)
    {
        printf("%d ", arr[i]);
    }
}

