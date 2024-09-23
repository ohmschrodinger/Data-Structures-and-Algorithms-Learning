#include <stdio.h>
#include <stdlib.h>
struct Node{
    int data;
    struct Node* next;
};

int isFull()
{
    struct Node* test = (struct Node*) malloc(sizeof(struct Node));
    if(test == NULL)
    {
        return 1;
    }
    free(test);
    return 0;
}

int isEmpty(struct Node* top)
{
    if( top ==NULL)
    {
        return 1;
    }

    return 0;
}

void pop(struct Node** top)
{
    if(isEmpty(*top))
    {
        printf("Stack underflow");
        return;
    }

    struct Node* ptr = *top;
    (*top) = (*top)-> next;
    printf("%d is popped", ptr -> data);
    free(ptr);

    return;
}
void push(struct Node** top, int n)
{
    if(isFull())
    {
        printf("Stack overflow");
        return;
    }
    struct Node* ptr = (struct Node*) malloc(sizeof(struct Node));
    ptr -> data = n;

    ptr -> next = *top;
    *top = ptr;

    printf("%d pushed\n",(*top) -> data);
    return;
}

void peek(struct Node* top)
{
    if(top == NULL)
    {
        printf("Underflow");
        return;
    }

    printf("%d", top -> data);
    return;
}

void display(struct Node* top)
{
    struct Node* p = top;
    while(p!=NULL)
    {
        printf("%d ", p -> data);
        p = p -> next;
    }
}

int main()
{
    struct Node* stack = NULL;

    push(&stack, 10);
    push(&stack, 20);
    push(&stack, 30);
    push(&stack, 40);
    push(&stack, 50);


    display(stack);
    printf("\n");
    peek(stack);

    return 0;
}