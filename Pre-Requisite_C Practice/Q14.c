// 14)	Write a program to search for an element in an array using linear search.

#include <stdio.h>


int linear_search(int* ptr, int size, int key)
{
    for(int i = 0; i<size; i++)
    {
        if(ptr[i] ==key)
        return i;
    }
    return -1;
}

int main()
{
    int arr[10] = {1,33,2,43,54,72,46,43,55,37};
    int* ptr =arr;

    int result = linear_search(ptr,10,54);
    printf("%d",result);
    


}