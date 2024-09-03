// 8)	Write a program to find the largest of three numbers.

#include <stdio.h>

int largest(int*x , int* y, int* z)
{
    if(*x > *y)
    {
        if(*x > *z)
        {
            return *x;
        }

        else{
            return *z;
        }
    }

    else{
        if(*y > *z) return *y;
        else return *z;
    }
}


int main()
{
    int a= 5, b = 15, c = 2220;
    int* x = &a;
    int* y = &b;
    int* z = &c;

    int result = largest(x,y,z);

    printf("%d",result);
}