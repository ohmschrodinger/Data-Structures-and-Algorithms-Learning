#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
    struct Node* prev;
};


struct Node* insert_node(struct Node* head, int n)
{
    struct Node* ptr = (struct Node*) malloc(sizeof(struct Node));
    struct Node* p = head;
    ptr -> data = n;
    ptr -> next = NULL;
    ptr -> prev = NULL;

    if(head == NULL)
    {
        return ptr;
    }
    else
    {
        while(p -> next != NULL )
        {
            p = p-> next;
        }
        p -> next = ptr;
        ptr -> prev = p;
        return head;
    }
}


void traversal(struct Node* head)
{
    struct Node* p = head;
    while(p != NULL)
    {
        printf("%d ", p-> data);
        p = p-> next;
    }
}


struct Node* delete_index(struct Node* head, int index)
{
    int i = 0;
    struct Node* p = head;
    struct Node* q = NULL;

    if(head == NULL)
    {
        return head;
    }


    if(index == 0) {
        head = head->next;
        if (head != NULL) {
            head->prev = NULL;
        }
        free(p);
        return head;
    }


    while(i < index && p != NULL) {
        q = p;
        p = p->next;
        i++;
    }

    if(p == NULL) {
        return head;
    }

  
    q->next = p->next;

    if(p->next != NULL)
    {
        p->next->prev = q;
    }

    free(p);
    return head;
}

int main()
{
    struct Node* head = NULL;

    head = insert_node(head, 0);
    head = insert_node(head, 1);
    head = insert_node(head, 2);
    head = insert_node(head, 3);
    head = insert_node(head, 4);
    head = insert_node(head, 5);

    traversal(head);
    printf("\n");

    head = delete_index(head, 3);


    traversal(head);

    return 0;
}
