// 13)	Write a program to sort an array of integers in ascending order.

#include <stdio.h>

int sort(int* ptr, int size)
{
    for(int i = 0 ; i <size;i++)
    {
         for(int j = 0 ; j <size;j++)
         {
        if(ptr[j] > ptr[j+1])
        {
            int temp = ptr[j];
            ptr[j] = ptr[j+1];
            ptr[j+1] = temp;
        }

         }
    }

    return 0;
}


int main()
{
    int arr[5] = {2,11,3,5,10};
    int* ptr = arr;

    sort(ptr,5);

    for(int i = 0;i<5;i++)
    {
        printf("%d ", ptr[i]);
    }
}