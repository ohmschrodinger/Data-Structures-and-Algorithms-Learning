// 3)	Write a program to swap two numbers without using a temporary variable.

#include <stdio.h>

void swap(int* x, int* y)
{
    *x = *x + *y;
    *y = *x - *y;
    *x = *x- *y;

    return;
}

int main()
{
    int a , b;
    int* i = &a;
    int* j = &b;

    printf("Enter two number: ");
    scanf("%d %d",&a, &b);

    printf("Before swapping: a = %d, b = %d",*i,*j);
    swap(i,j);
    printf("\nAfter swapping a = %d, b = %d",a,b);

    return 0;
}