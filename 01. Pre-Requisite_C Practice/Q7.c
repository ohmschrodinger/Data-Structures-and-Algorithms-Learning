// 7)	Write a program to check if a given number is prime.
// to check whether a number is prime or not iterate the loop from 2 to root n

#include <stdio.h>
#include <math.h>

void prime(int* x)
{
    int counter = 0;
    int sqrt = pow(*x , 0.5);
    for(int i =2;i<= sqrt;i++)
    {
        if(*x %2 ==0) { counter++; printf("Not Prime"); return; break;}
    }
    printf("Prime");
}

int main()
{
    int a= 50;
    int* x= &a;
    prime(x);
    return 0;
}