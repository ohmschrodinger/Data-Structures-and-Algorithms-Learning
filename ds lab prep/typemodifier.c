#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int a = -2;
    signed int b = -2;
    long int c = -2;
    short int d = -2;
    printf("%d size: %d ",a, sizeof(a)); printf("\n");
    printf("%d size: %d ",b, sizeof(b)); printf("\n");
    printf("%d size: %d ",c, sizeof(c));printf("\n");
    printf("%d size: %d ",d, sizeof(d));printf("\n");
    return 0;
}