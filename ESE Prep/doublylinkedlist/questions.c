#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node* next;
    struct Node* prev;
};

void traversal(struct Node* head)
{
    struct Node* p = head;
    while(p!=NULL)
    {
        printf("%d ", p-> data);
        p = p->next;
    }

}

struct Node* insert_ascending(struct Node* head, int n)
{
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
    ptr -> data = n;
    if(head == NULL)
    {
        ptr -> next = NULL;
        ptr -> prev = NULL;
        return ptr;
    }
    struct Node* p = head;
    while(p!= NULL && p-> next != NULL && p -> next -> data < n)
    {
        p = p-> next;
    }
    if(p-> next == NULL)
    {
        p -> next = ptr;
        ptr -> prev = p;
        ptr -> next = NULL;
    }
    else{
    ptr -> next = p -> next;
    p -> next -> prev = ptr;
    ptr -> prev = p;
    p-> next = ptr;
    }
    return head;
}
int main()
{

    struct Node* head = NULL;
    head = insert_ascending(head,10);
    head = insert_ascending(head,90);
    head = insert_ascending(head,100);
    head = insert_ascending(head,30);
    head = insert_ascending(head,20);

    traversal(head);
    
    return 0;
}