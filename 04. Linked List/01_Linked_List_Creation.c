#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* next; //self referencing structure
};


int main()
{   
    struct Node* head ;
    struct Node* second ;
    struct Node* third ;
    head = (struct Node*) malloc(sizeof(struct Node)); //head is struct pointer
    second = (struct Node*) malloc(sizeof(struct Node)); 
    third = (struct Node*) malloc(sizeof(struct Node)); 

//linking of first and second node
    head -> data = 10;
    head -> next = second;

//linking of second and third node
    second->data  = 20;
    second -> next = third;

//the third node (last node) points to NULL
    third -> data = 30;
    third -> next = NULL;

    return 0;
}