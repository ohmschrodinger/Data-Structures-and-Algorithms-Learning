#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

struct Node* insert_node_end(struct Node* head, int n)
{
    struct Node* ptr = (struct Node*) malloc(sizeof(struct Node));
    ptr -> data = n;

    if(head == NULL)
    {
        ptr -> next = NULL;
        return ptr;
    }

    struct Node* p = head;
    while( p -> next != NULL)
    {
        p = p-> next;
    }

    p -> next = ptr;
    ptr -> next = NULL;
    return head;
}

void traversal(struct Node* head)
{
    struct Node* p = head;
    while(p != NULL)
    {
        printf("%d ", p -> data);
        p = p -> next;
    }
    return;
}

int find_middle(struct Node* head)
{
    struct Node* p = head;
    struct Node* q = head;

    while(p -> next != NULL && p != NULL)
    {
        p = (p -> next) -> next;
        q = q -> next;
    }

    return q -> data;
}
int main()
{
    struct Node* head = NULL;

    head = insert_node_end(head,10);
    head = insert_node_end(head,20);
    head = insert_node_end(head,30);
    head = insert_node_end(head,40);
    head = insert_node_end(head,50);

    traversal(head);
    printf("\n");
    printf("Middle Element: %d", find_middle(head));
    return 0;
}