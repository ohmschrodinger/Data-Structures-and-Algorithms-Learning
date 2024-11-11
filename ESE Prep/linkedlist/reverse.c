#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* insert_end(struct Node* head, int n)
{
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
    if(head==NULL)
    {
        ptr -> data = n;
        ptr -> next = NULL;
        return ptr;
    }
    struct Node* p = head;
    while(p -> next != NULL)
    {
        p = p-> next;
    }
    p -> next = ptr;
    ptr -> next = NULL;
    ptr -> data = n;
    return head;
}

void traversal(struct Node* head)
{
    struct Node* p = head;
    while(p!= NULL)
    {
        printf("%d ", p->data);
        p = p-> next;
    }
    printf("\n");
}

struct Node* reverse_list(struct Node* head)
{
    struct Node* prev = NULL;
    struct Node* current = head;
    struct Node* next = NULL;

    while(current!= NULL)
    {
        next = current-> next;
        current -> next = prev;
        prev = current;
        current = next;
    }
    return prev;
}
int main()
{
    struct Node* head = NULL;
    head = insert_end(head, 10);
    head = insert_end(head, 20);
    head = insert_end(head, 30);
    head = insert_end(head, 40);
    head = insert_end(head, 50);
    traversal(head);
    head = reverse_list(head);
    traversal(head);
    return 0;
}