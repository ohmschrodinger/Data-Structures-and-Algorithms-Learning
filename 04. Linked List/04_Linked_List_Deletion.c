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
    return 0;
}