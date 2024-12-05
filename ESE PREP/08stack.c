#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

int isFull()
{
    struct Node* test = (struct Node*)malloc(sizeof(struct Node));
    if(test == NULL)
    {
        return 1;
    }
    return 0;
}

int isEmpty(struct Node* top)
{
    if(top == NULL)
    {
        return 1;
    }

    return 0;
}


void pop(struct Node** top)
{
    if(isEmpty(*top))
    {
        printf("Stack Underflow");
        return;
    }
    struct Node* p = (*top);
    (*top) = (*top) -> next;

    printf("%d popped", p-> data);
    free(p);
    return; 
}


void peek(struct Node* top)
{
    if(top == NULL)
    {
        printf("Null");
        return;
    }

    printf("%d ",top -> data);
    return;
}

void push(struct Node** top, int n)
{
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
    ptr -> data = n;

    ptr -> next = (*top);
    (*top) = ptr;
    return;
}

int main()
{
    struct Node* stack = NULL;

    push(&stack,10);
}