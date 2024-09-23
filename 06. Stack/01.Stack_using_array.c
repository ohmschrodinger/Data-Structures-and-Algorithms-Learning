//implementing stack using array
#include <stdio.h>
#include <stdlib.h>

struct stack{
    int size;
    int top;
    int* arr;
};

int main()
{
    // method1
    // struct stack s;
    // s.size = 50;
    // s.top =  -1 //always set top to -1 as stack dosent contain any element yet
    // s.arr = (int *) malloc(S.size * sizeof(int));

    // method 2

    struct stack* s;
    s -> size = 50;
    s -> top = -1;
    s -> arr = (int *) malloc(s -> size * sizeof(int));
    
    return 0;
}