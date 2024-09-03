// 10)	Write a program to find the length of a string without using the strlen function.


#include <stdio.h>
#include <stdlib.h>

int stringlength(char* ptr)
{
    int counter = 0;
    while(ptr[counter]!='\0')
    {
        counter++;
    }
    return counter;
}



int main()
{
    char str[] = "Hello";
    char* ptr = str;
    puts(str);

    int result = stringlength(ptr);
    printf("%d",result);
}

