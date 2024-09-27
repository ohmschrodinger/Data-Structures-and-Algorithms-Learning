// 4)	Write a program to check if a given number is even or odd.
#include <stdio.h>

void evenodd(int* x)
{
    if(*x %2 ==0) printf("Even");
    else printf("Odd");

    return;
}

int main()
{
    int a = 51;
    int* x = &a;

    evenodd(x);
    return 0;
}