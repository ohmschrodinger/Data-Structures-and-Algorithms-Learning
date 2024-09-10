#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node* next;
};

void traversal(struct Node* ptr)
{
    while(ptr!=NULL){
        printf("%d ", ptr->data);
        ptr = ptr -> next;
    }
}



struct Node* insert_First(struct Node* head, int n)
{
    struct Node* ptr = (struct Node*) malloc(sizeof(struct Node));

    ptr -> data = n;
    ptr -> next = head;

    return ptr;
}
int main()
{
    struct Node* head = NULL;
    struct Node* second = NULL;
    struct Node* third = NULL;
    struct Node* fourth = NULL;
    

    head = (struct Node*) malloc(sizeof(struct Node));
    second = (struct Node*) malloc(sizeof(struct Node));
    third = (struct Node*) malloc(sizeof(struct Node));
    fourth = (struct Node*) malloc(sizeof(struct Node));


    head->data = 10;
    head -> next = second;

    second->data = 20;
    second -> next = third;

    third->data = 30;
    third -> next = NULL;


    fourth -> data = 40;
    fourth -> next = NULL;


    insert_begining(fourth , head);
    head = insert_First(head , 90);

    traversal(head);



}