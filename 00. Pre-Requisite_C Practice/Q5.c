// 5)	Write a program to find the factorial of a given number.

#include <stdio.h>

int fact(int* x)
{
    if(*x ==0 || *x==1) return 1;
    else{ 
    int temp = *x - 1;
    return(*x * fact(&temp));    //if you put fact(x-1)..x-1 does not decrease the value but subtracts -1 from the pointer
    }
}

int main()
{
    int a = 5;
    int* x= &a;

    int result = fact(x);
    printf("%d",result);

    return 0;
}