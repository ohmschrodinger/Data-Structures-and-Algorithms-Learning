#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* createNode(int data)
{
    struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
    if (newNode == NULL)
    {
        printf("Error: Memory allocation failed.\n");
        exit(1);
    }
    

    newNode->data = data;
    newNode->next = NULL;
    
    return newNode;
}

struct Node* insertAtEnd(struct Node* head, int data) {
    struct Node* newNode = createNode(data); // Create a new node
    if (head == NULL)
    {
        return newNode;
    }
    
    struct Node* temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    } 
    temp->next = newNode;  
    return head;
}

int main()
{
    return 0;
}
