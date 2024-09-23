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

struct Node* insert_node_beg(struct Node* head, int n)
{
    struct Node* ptr = (struct Node*) malloc(sizeof(struct Node));
    ptr -> data = n;

    if(head == NULL)
    {
        ptr -> next = NULL;
        return ptr;
    }
    ptr -> next = head;
    return ptr;
}

struct Node* insert_node_index(struct Node* head, int n, int index)
{
    struct Node* ptr = (struct Node*) malloc(sizeof(struct Node));
    ptr -> data = n;

    struct Node* p = head;
    int counter = 0;

    if(index == 0)
    {
        ptr -> next = head;
        return ptr;
    }

    while(counter < index -1 && p != NULL)
    {
        p = p -> next;
        counter++;
    }

    ptr -> next = p -> next;
    p -> next = ptr;

    return head;
}
struct Node* delete_first_node(struct Node* head)
{
    if(head==NULL)
    {
        return NULL;
    }
    struct Node* p = head;
    head = head -> next;
    p -> next =NULL;
    free(p);
    return head;
}

struct Node* delete_last_node(struct Node* head)
{
    if(head==NULL)
    {
        return NULL;
    }

    if(head -> next == NULL)
    {
        free(head);
        return NULL;
    }

    struct Node* p = head;
    struct Node* q = head;
    while( p-> next != NULL)
    {
        q = p;
        p = p-> next;
    }

    q -> next = NULL;
    free(p);
    return head;
}

struct Node* delete_node_index(struct Node* head, int index)
{
    struct Node* p = head;
    struct Node* q = head;

    if(head == NULL)
    {
        return NULL;
    }

    if(head -> next == NULL)
    {
        free(head);
        return NULL;
    }

    if(index == 0)
    {
        head = head-> next;
        free(p);
        return head;
    }
    int counter = 0;
    while( counter < index)
    {
        q = p;
        p = p-> next;
        counter++;
    }

    q -> next = p-> next;
    p -> next = NULL;
    free(p);
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
int main()
{
    struct Node* head = NULL;

    head = insert_node_end(head,10);
    head = insert_node_end(head,20);
    head = insert_node_end(head,30);
    head = insert_node_end(head,40);
    head = insert_node_end(head,50);
    head = insert_node_beg(head,100);
    head = insert_node_index(head, 200, 3);
    head = delete_first_node(head);
    head = delete_last_node(head);
    head = delete_node_index(head, 2);




    traversal(head);
    return 0;
}