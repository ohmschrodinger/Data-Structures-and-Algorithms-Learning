#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node* next;
};

int isFull()
{
    struct Node* test = (struct Node*) malloc(sizeof(struct Node));
    if(test ==NULL)
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

void enqueue(struct Node** front, struct Node** rear, int n)
{
    if(isFull())
    {
        printf("Overflow");
        return;
    }

    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp -> data = n;
    temp -> next = NULL;

  
    if(*rear == NULL)
    {
        *rear = *front = temp;
    }

    else{
    (*rear) -> next = temp;
    *rear = temp;
    printf("%d added to the queue\n", (*rear) -> data);
    }
    return;

}

void dequeue(struct Node** front, struct Node** rear)
{
    if(isEmpty(*front))
    {
        printf("Underflow");
        return;
    }

    struct Node* temp = *front;
    *front = (*front) -> next;

    if(*front == NULL)
    {
        *rear = NULL;
    }

    printf("%d element popped", temp -> data);
    free(temp);
    return;
}

void display(struct Node* front, struct Node* rear)
{
    struct Node* ptr = front;

    while(ptr != NULL)
    {
        printf("%d ", ptr -> data);
        ptr = ptr -> next;
    }
}

int main()
{
    struct Node* front = NULL; //front is like head
    struct Node* rear = NULL;

    enqueue(&front, &rear, 10);
    enqueue(&front, &rear, 20);
    enqueue(&front, &rear, 30);

    display(front,rear);
    printf("\n");

    dequeue(&front, &rear);
    dequeue(&front, &rear);

    display(front,rear);
    return 0;
}