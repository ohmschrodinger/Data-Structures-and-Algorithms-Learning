#include <stdio.h>
#include <stdlib.h>

void insertionSort(int* arr, int n)
{
    for(int i = 1; i< n; i++)
    {
        int key = arr[i];
        int j = i-1;

        while(j>=0 && arr[j]>key)
        {
            arr[j+1] = arr[j];
            j--;
        }

        arr[j+1] = key;
    }
}
int main()
{
    int arr[10] = {5,4,5,23,100,50,3,3,2,1};
    int* ptr = arr;
    insertionSort(ptr,10);
    for(int i =0; i<10;i++)
    {
        printf("%d ",arr[i]);
    }
    
    return 0;
}