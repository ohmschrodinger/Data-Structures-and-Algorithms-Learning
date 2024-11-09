#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* next;
};


void traversal(struct Node* head)
{
    struct Node* temp = head;
    while(temp!= NULL)
    {
        printf("%d ", temp ->data);
        temp = temp -> next;
    }
    printf("\n");
}

struct Node* insertNode_end(struct Node* head, int n)
{
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
    ptr -> data = n;
    ptr -> next = NULL;

    if (head == NULL) return ptr;

    struct Node* temp = head;
    while(temp -> next != NULL)
    {
        temp = temp-> next;
    }
    temp -> next = ptr;
    return head;
}

int main()
{
    struct Node* head = NULL;
    head = insertNode_end(head, 10);
    head = insertNode_end(head, 20);
    head = insertNode_end(head, 30);
    head = insertNode_end(head, 40);
    head = insertNode_end(head, 50);

    traversal(head);

    return 0;

}