// 12)	Write a program to count the number of vowels in a given string.
#include <stdio.h>
#include <string.h>

int vowels(char* ptr)
{
    int len = strlen(ptr);
    int counter = 0;
    for(int i = 0;i<len ; i++)
    {
        if( ptr[i] == 'a' ||ptr[i] == 'e' ||ptr[i] == 'i' ||ptr[i] == 'o' ||ptr[i] == 'u' )
        {
            counter++;
        }
    }
    return counter;
}


int main()
{
    char str[] = "Hello";
    char * ptr = str;
    int result = vowels(ptr);
    printf("No of vowels: %d",result);
    return 0;
}