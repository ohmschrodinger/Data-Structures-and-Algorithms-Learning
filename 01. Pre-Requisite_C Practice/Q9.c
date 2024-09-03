// 9)	Write a program to reverse a given string.

#include <stdio.h>
#include <stdlib.h>

void reverse(char* ptr)
{
    int counter = 0;
    while(ptr[counter]!='\0')
    {
        counter++;
    }
    printf("%d\n",counter);
    
    for(int i = 0, j = counter - 1; i<=j;i++,j--)
    {
        char temp = ptr[i];
        ptr[i] = ptr[j];
        ptr[j] = temp;
    }
    return;
}



int main()
{
    char str[] = "Hello";
    char* ptr = str;
    puts(str);

    reverse(ptr);

    puts(str);
}




// to print a string using pointer

//   while (*ptr != '\0') {
//         printf("%c ", *ptr);
//         ptr++;
//     }