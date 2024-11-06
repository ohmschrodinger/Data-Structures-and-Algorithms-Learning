#include <stdio.h>
#include <stdlib.h>

struct queue {
    int data;
    struct queue* next;
};

int isFull()
{
    struct queue* test = (struct queue*) malloc(sizeof(struct queue));
    if(test ==NULL)
    {
        return 1;
    }
    return 0;
}

int isEmpty(struct queue* front)
{
    if(front == NULL)
    {
        return 1;
    }
    return 0;
}

void enqueue(struct queue** front, struct queue** rear, int n)
{
    if(isFull())
    {
        printf("Overflow");
        return;
    }

    struct queue* temp = (struct queue*)malloc(sizeof(struct queue));
    temp -> data = n;
    temp -> next = NULL;

  
    if(*rear == NULL)
    {
        *rear = *front = temp;
    }

    (*rear) -> next = temp;
    *rear = temp;

    printf("%d added to the queue\n", (*rear) -> data);
    return;
}

void dequeue(struct queue** front, struct queue** rear)
{
    if(isEmpty(*front))
    {
        printf("Underflow");
        return;
    }

    struct queue* temp = *front;
    *front = (*front) -> next;

    if(*front == NULL)
    {
        *rear = NULL;
    }

    printf("%d element popped", temp -> data);
    free(temp);
    return;
}

void display(struct queue* front, struct queue* rear)
{
    struct queue* ptr = front;

    while(ptr != NULL)
    {
        printf("%d ", ptr -> data);
        ptr = ptr -> next;
    }
}

int main()
{

    struct queue q;
    q.size = 400;
    return 0;
}