// 6)	Write a program to generate the Fibonacci series up to a given number.

#include <stdio.h>

int fibonacci(int* x)
{
    if(*x== 0 || *x ==1)
    {
        return 1;
    }
    else
    {
        int temp = *x - 1;
        int temp2 = *x - 2;
    return fibonacci(&temp) + fibonacci(&temp2);
    }
}

int main()
{
    int num = 10;
    int* x = &num;
    for(int i = 1;i<=num;i++)
    {
    int temp = i;
    int result = fibonacci(&temp);
    printf("%d ",result);
    }
}