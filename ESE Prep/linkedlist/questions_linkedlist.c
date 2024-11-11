#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node* next;
};

void traversal(struct Node* ptr)
{
    while(ptr != NULL)
    {
        printf("%d ", ptr -> data);
        ptr = ptr -> next;
    }
    printf("\n");
}
struct Node* delete_first(struct Node* head)
{
    struct Node* p = head-> next;
    free(head);
    return p;
}

struct Node* delete_value(struct Node* head, int key)
{
    struct Node* p = head;
    struct Node* q = p;

    while(p->data != key)
    {
        q = p;
        p = p -> next;
    }

    q->next = p-> next;
    
    p -> next = NULL;
    free(p);
    return head;
}

struct Node* insert_beg(struct Node* head, int n)
{
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
    if(head == NULL)
    {
        ptr ->next = NULL;
        ptr -> data = n;
        return ptr;
    }
    ptr -> next = head;
    ptr -> data = n;
    return ptr;
}

struct Node* insert_index(struct Node* head, int n, int index)
{
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
    if(head == NULL)
    {
        ptr ->next = NULL;
        ptr -> data = n;
        return ptr;
    }

    struct Node* p = head;
    int i = 0;
    while(i< index-1)
    {
        p = p-> next;
        i++;
    }

    ptr -> data = n;
    ptr -> next = p -> next;
    p -> next = ptr;
    return head;
}
struct Node* reverse(struct Node* head)
{
    struct Node* next = NULL;
    struct Node* current = head;
    struct Node* prev = NULL;

    while(current!=NULL)
    {
        next = current -> next;
        current -> next =prev;
        prev= current;
        current = next;
    }
    return prev;
}
int main()
{
    struct Node* head = NULL;
    head = insert_beg(head, 10);
    head = insert_beg(head, 20);
    head = insert_beg(head, 30);
    head = insert_beg(head, 40);
    head = insert_index(head, 100, 2);

    traversal(head);
    head = delete_value(head,100);
    // head = delete_first(head);
    traversal(head);

    head = reverse(head);
    traversal(head);
    return 0;
}