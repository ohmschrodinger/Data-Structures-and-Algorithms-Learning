#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

void traversal(struct Node* ptr)
{
    while(ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
}

struct Node* insert_beg(struct Node* head, int n)
{
    struct Node* ptr = (struct Node*) malloc(sizeof(struct Node));
    ptr->data = n;
    ptr->next = head;
    
    return ptr;
}

struct Node* insert_end(struct Node* head, int n)
{
    struct Node* ptr = (struct Node*) malloc(sizeof(struct Node));
    ptr -> data = n;

    struct Node* p = head;
    while(p-> next != NULL)
    {
        p = p->next;
    }
    p-> next = ptr;
    ptr -> next = NULL;
    return head;
}

struct Node* delete_beg(struct Node* head)
{
    struct Node* ptr = head;
    head = head -> next;
    ptr -> next = NULL;
    free(ptr);
    return head;
}

struct Node* delete_index(struct Node* head, int index)
{
    struct Node* p = head;
    struct Node* q = head;
    int i = 0;
    while(i < index - 1)
    {
        p = p -> next;
        q = q-> next;
        i++;
    }
    q = q-> next;
    p-> next = q-> next;
    q -> next = NULL;
    free(q);
    return head;
}

struct Node* delete_end(struct Node* head)
{
    struct Node* ptr = head;
    while(ptr -> next -> next != NULL)
    {
        ptr = ptr -> next;
    }
    free(ptr -> next);
    ptr -> next = NULL;

    return head;
}

// deleting a node with a given value from the linked list
struct Node* delete_value(struct Node* head, int n)
{
    struct Node* ptr = head;
    struct Node* q = NULL;
    int index= 0;

    while( ptr -> data != n && ptr != NULL)
    {
        q = ptr;
        ptr = ptr -> next;
    }
        q -> next = ptr -> next;
        free(ptr);
        return head;
}


int main()
{
    struct Node* head= NULL;
    int i = 20;
    head = insert_beg(head, 10);
    while(i <= 50){
        head = insert_end(head, i);
        i = i + 10;
    }

    traversal(head);
    
    head = delete_beg(head);
    
    printf("\n");
    traversal(head);

    head = delete_value(head,40);
    printf("\n");
    traversal(head);

    head = delete_end(head);
    printf("\n");
    traversal(head);

    return 0;
}