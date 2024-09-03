// 11)	Write a program to check if a given string is a palindrome.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void reverse(char* ptr)
{
    int counterl = 0;
    while(ptr[counterl]!='\0')
    {
        counterl++;
    }
    printf("%d\n",counterl);
    for(int i = 0, j = counterl - 1; i<=j;i++,j--)
    {
        char temp = ptr[i];
        ptr[i] = ptr[j];
        ptr[j] = temp;
    }
    return;
}
int palindrome(char* ptr, char* ptr2)
{
    int counter = 0;
    while(*ptr != '\0')
    {
        if(*ptr != *ptr2)
        {
            counter++;
            return -1;
        }
        ptr++; ptr2++;

    }
    return 1;
}
int main()
{
    char str[] = "Hello";
    char* ptr = str;
    reverse(ptr);

    char str2[6];
    strcpy(str2,"Hello");
    char* ptr2 = str2;

    int result = palindrome(ptr, ptr2);
    if(result==-1) printf("Not a palindrome");
    else printf("Palindrome");
}