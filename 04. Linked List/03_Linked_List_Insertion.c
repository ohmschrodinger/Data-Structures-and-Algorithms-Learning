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

// the following wont work for index = 0;
struct Node* insert_index(struct Node* head, int n, int index)
{
    struct Node* ptr = (struct Node*) malloc(sizeof(struct Node));
    ptr -> data = n;

    struct Node* p = head;
    int i = 0;
    while(i < index-1)
    {
        p = p -> next;
        i++;
    }

    ptr -> next = p -> next;
    p -> next = ptr;
    return head;
}

struct Node* insert_after_node(struct Node* head, struct Node* prevNode , int n)
{
    struct Node* ptr = (struct Node*) malloc(sizeof(struct Node));
    ptr -> data = n;

    ptr -> next = prevNode -> next;
    prevNode -> next = ptr;

    return head;

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


int main()
{
    
    struct Node* head = NULL;
    head = insert_beg(head, 10);
    head = insert_beg(head, 20);
    
    head = insert_index(head,30,1);

    head = insert_end(head, 100);
    
    traversal(head);
    return 0;
}
