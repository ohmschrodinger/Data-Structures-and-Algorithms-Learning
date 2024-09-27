// 15)	Write a program to search for an element in an array using binary search.

#include <stdio.h>

int binary_search(int* arr, int size, int key)
{
    int low = 0 ;
    int high = size - 1;
    while(low<=high)
    {
        int middle = low + (high-low)/2;
        if(arr[middle]> key)
        {
            high = middle - 1;
        }
        if(arr[middle]< key)
        {
            low = middle + 1;
        }
        if(arr[middle]== key)
        {
            return middle;
        }
    }
}


int main()
{
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int* ptr = arr;

    int result = binary_search(ptr, 10, 5);
    printf("Index: %d",result);
    return 0;
    
}