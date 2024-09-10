#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

void traversal(struct Node* ptr)
{
    while(ptr!= NULL)
    {
        printf("%d ", ptr -> data);
        ptr = ptr -> next;
    }
}


struct Node* insert_begining(struct Node* head , int n)
{
    struct Node* ptr = (struct Node*) malloc(sizeof(struct Node));
    ptr -> data = n;

    ptr -> next = head;

    return ptr;
}


struct Node* insert_at_index(struct Node* head , int n, int index)
{
    struct Node* ptr = (struct Node*) malloc(sizeof(struct Node));
    ptr -> data = n;

    struct Node* p = head;
    int i = 0;
    while(i != index - 1)
    {
        p = p->next;
        i++;
    }

    ptr -> next = p -> next;
    p -> next = ptr;

    return head;
}
int main()
{
    struct Node* head = NULL;
    struct Node* second = NULL;
    struct Node* third = NULL;
    struct Node* fourth = NULL;

    head = (struct Node* ) malloc(sizeof(struct Node));
    second = (struct Node* ) malloc(sizeof(struct Node));
    third = (struct Node* ) malloc(sizeof(struct Node));
    fourth = (struct Node* ) malloc(sizeof(struct Node));

    head -> data = 10;
    head -> next = second;
    
    second -> data = 20;
    second -> next = third;

    third -> data = 30;
    third -> next = fourth;

    fourth -> data = 40;
    fourth -> next = NULL;

    // traversal(head);

    struct Node* new_head = (struct Node* ) malloc(sizeof(struct Node));
    struct Node* new_2head = (struct Node* ) malloc(sizeof(struct Node));
    new_head = insert_begining(head, 90);

    traversal(new_head);

    printf("\n\n");

    new_2head = insert_at_index(new_head , 100, 3);
    traversal(new_2head);


    return 0;

}