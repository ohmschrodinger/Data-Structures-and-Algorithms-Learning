#include <stdio.h>

struct Node{
    int data;
    struct Node* next;
};

int isFull()
{
    struct Node* temp = (struct Node*) malloc(sizeof(struct Node));
    if(temp == NULL)
    {
        return 1;
    }
    return 0;
}

int isEmpty(struct Node* front)
{
    if(front == NULL)
    {
        return 1;
    }
    return 0;
}

void enqueue(struct Node**front, struct Node** rear, int n)
{
    struct Node* ptr = (struct Node*)malloc(sizeof (struct Node));
    ptr -> data = n;
    if((*front) == NULL)
    {
        ptr -> next = NULL;
        *front = *rear = ptr;
    }

    else{

        (*rear) -> next = ptr;
        (*rear) = ptr;       
    }
}

void dequeue(struct Node** front, struct Node** rear)
{
    struct Node* temp = *front;

    if(*front == NULL)
    {
        return;
    }

    *front = *front -> next;
    free(temp);
    return;
}