#include <stdio.h>

int linear_search(int* arr, int n, int key)
{
    for(int i= 0; i<n; i++)
    {
        if(arr[i] ==key)
        {
            return i;
        }
    }

    return -1;
}

int main()
{
    int arr[] = {0,1,2,3,4,5,6};
    int* ptr = arr;

    printf("%d ", linear_search(ptr,7,9));

    return -1;
    
}