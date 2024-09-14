#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node* next;
    struct Node* prev;
};


//create node
struct Node* create_node(struct Node* head)
{
    struct Node* ptr = (struct Node*) malloc(sizeof(struct Node));
    struct Node* p = head;

    int n;
    printf("Enter data: ");
    scanf("%d", &n);
    ptr -> data = n;

    if(head == NULL)
    {
        ptr -> next = NULL;
        ptr -> prev = NULL;
        return ptr;
    }

    else{
        while(p-> next != NULL)
        {
            p = p-> next;
        }
        p -> next = ptr;

        ptr -> prev = p;
        ptr -> next = NULL;

        return head;
    }
}

//traversal

void traversal(struct Node* head)
{
    struct Node* p = head;
    while(p != NULL)
    {
        printf("%d ", p -> data);
        p = p->next;
    }
}
int main()
{
    struct Node* head = NULL;
    head = create_node(head);
    head = create_node(head);
    head = create_node(head);
    head = create_node(head);
    head = create_node(head);

    traversal(head);

    return 0;
}