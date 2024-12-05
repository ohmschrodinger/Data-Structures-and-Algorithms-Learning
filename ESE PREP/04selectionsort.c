#include <stdio.h>

void selection_sort(int* arr, int n)
{
    for(int i = 0; i< n-1; i++)
    {
        int min_index = i;
        for(int j = i+1; j< n ; j++)
        {
            if(arr[j]< arr[min_index])
            {
                min_index = j;
            }
        }

        if(min_index!=i)
        {
            // swap
            int temp = arr[min_index];
            arr[min_index] = arr[i];
            arr[i] = temp;
        }
    }
}



int main()
{
    int arr[] = {5,4,1,3,2,9};
    int* ptr = arr;
    selection_sort(ptr,6);

    for(int i = 0; i<6;i++)
    {
        printf("%d ", ptr[i]);
    }
    return 0;
}