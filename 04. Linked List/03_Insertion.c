#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

void LinkedListTraversal(struct Node* ptr)
{
    while(ptr != NULL)
    {
        printf("%d ", ptr -> data);
        ptr = ptr -> next;
    }
    return;
}


struct Node* insert_beg(struct Node* head, int data)
{
    struct Node* ptr = (struct Node*) malloc(sizeof(struct Node));

    ptr -> data = data;
    ptr -> next = head;
    head = ptr;

    return ptr;

    
}







int main()
{
    struct Node* head;
    struct Node* second;
    struct Node* third;
    struct Node* fourth;
    struct Node* fifth;
    struct Node* sixth;

    head = (struct Node*) malloc(sizeof(struct Node));
    second = (struct Node*) malloc(sizeof(struct Node));
    third= (struct Node*) malloc(sizeof(struct Node));
    fourth= (struct Node*) malloc(sizeof(struct Node));
    fifth= (struct Node*) malloc(sizeof(struct Node));
    sixth = (struct Node*) malloc(sizeof(struct Node));

    head -> data = 10;
    head -> next = second;
    second -> data = 20;
    second -> next = third;
    third-> data = 30;
    third -> next = fourth;
    fourth -> data = 40;
    fourth-> next = fifth;
    fifth -> data = 50;
    fifth -> next = NULL;

    sixth -> data = 60;
    LinkedListTraversal(head);


    head = insert_beg(head, 69);
    printf("\n");

    LinkedListTraversal(head);
    return 0;
}
