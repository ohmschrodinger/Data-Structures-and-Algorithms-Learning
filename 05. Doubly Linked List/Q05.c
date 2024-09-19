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

void check_palindrome(struct Node* head)
{
    if(head == NULL)
    {
        printf("NULL");
        return;
    }

    struct Node* q = head;
    struct Node* p = head;
    int n=1;
    int counter=1;
    while(q -> next != NULL)
    {
        q = q -> next;
        n++;
    }

    while(counter <= n/2)
    {
        if(p-> data != q -> data) 
        {
            printf("Not a palindrome");
            return;
        }
        p = p-> next;
        q = q-> prev;
        counter++;
    }

    printf("Palindrome");
    return;
}
int main()
{
    struct Node* head = NULL;

    head = insert_node(head, 0);
    head = insert_node(head, 1);
    head = insert_node(head, 2);
    head = insert_node(head, 2);
    head = insert_node(head, 1);
    head = insert_node(head, 0);

    traversal(head);
    printf("\n");
    // traversal(head);
    check_palindrome(head);

    return 0;
}
