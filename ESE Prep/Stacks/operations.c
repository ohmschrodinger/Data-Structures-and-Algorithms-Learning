#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

int isFull()
{
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    if(temp==NULL)
    {
        return 1; //is full
    }

    return 0; //not full
}

int isEmpty(struct Node* top)
{
    if(top ==NULL)
    {
        return 1; //is empty
    }

    return 0; //not empty
}

void pop(struct Node** top)
{
    if(isEmpty(*top))
    {
        printf("Stack underflow\n");
        return;
    }
    struct Node* p = *top;
    (*top) = (*top) -> next;
    printf("%d popped\n", p->data);
    free(p);
    return;
}

void push(struct Node** top, int n)
{
    if(isFull(top))
    {
        printf("Stack overflow");
        return;
    }
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
    ptr -> data = n;
    ptr -> next = *top;
    *top = ptr;
    printf("%d pushed\n", (*top) -> data);
    return;
}

void peek(struct Node* top)
{
    printf("%d \n",top ->data);
    return;
}

void display(struct Node* top)
{
    struct Node* p = top;
    while(p!=NULL)
    {
        printf("%d ", p->data);
        p = p-> next;
    }printf("\n");
    return;
}

int main()
{
    struct Node* top = NULL;
    pop(&top);
    push(&top,10);
    push(&top,10);
    push(&top,10);
    push(&top,10);
    display(top);
    return 0;
}