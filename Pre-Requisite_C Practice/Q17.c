// 17)	Write a program to find the second largest element in an array.

#include <stdio.h>

int second_largest(int* ptr, int size)
{
    int largest = ptr[0];
    int second = ptr[1];
    int counter = 0;
    for(int i = 0; i< size; i++)
    {
        if(ptr[i]>largest)
        {
            second = largest;
            largest = ptr[i];
            counter++;
        }

    }

    if(counter==0)
    {
        for(int i = 1;i<size;i++)
        {
            if(ptr[i]>second)
            {
                second = ptr[i];
            }
        }
    }

    return second;
}

int main()
{
    int arr[5] = {8,1,3,2,6};
    int* ptr = arr;
    int result = second_largest(ptr,5);
    printf("%d",result);
}