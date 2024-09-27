// 2)	Write a program to find the sum of two numbers.
#include <stdio.h>

int sum_of_two_numbers(int a, int b)
{
    int sum = a+b;
    return sum;
}

int main()
{
    int x,y;
    printf("Enter two numbers: ");
    scanf("%d%d",&x, &y);
    int result = sum_of_two_numbers(x,y);
    printf("Result: %d",result);
}
