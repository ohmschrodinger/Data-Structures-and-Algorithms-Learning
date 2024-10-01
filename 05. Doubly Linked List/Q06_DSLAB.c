// Creation of Doubly Linked list
// Insertion at beginning
// Insertion at end
// Insertion after specific node
// Display

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
    struct Node* prev;
};

struct Node* insert_beginning(struct Node* head, int n)
{
    struct Node* p = (struct Node*)malloc(sizeof(struct Node));
    p->data = n;
    p->prev = NULL;
    p->next = head;

    if (head != NULL) {
        head->prev = p;
    }

    head = p;
    return head;
}

struct Node* insert_end(struct Node* head, int n) {
    struct Node* p = (struct Node*) malloc(sizeof(struct Node));
    p->data = n;
    p->next = NULL;

    if (head == NULL) {
        p->prev = NULL;
        return p;  
    }

    struct Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = p;
    p->prev = temp;

    return head;
}

struct Node* insert_at_node(struct Node* head, int n, int index) {
    if (index == 0) {
        return insert_beginning(head, n); 
    }

    struct Node* temp = head;
    struct Node* p = (struct Node*) malloc(sizeof(struct Node));
    p->data = n;

    int i = 0;
    while (temp != NULL && i < index - 1) {
        temp = temp->next;
        i++;
    }

    if (temp == NULL) {
        printf("Index out of bounds\n");
        return head; 
    }

    p->next = temp->next;
    p->prev = temp;

    if (temp->next != NULL) {
        temp->next->prev = p;
    }

    temp->next = p;

    return head;
}

void traversal(struct Node* head) {
    struct Node* p = head;
    while (p != NULL) {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
}

int main() {
    struct Node* head = NULL;
    
    head = insert_end(head, 0);
    head = insert_end(head, 1);
    head = insert_end(head, 2);
    head = insert_end(head, 3);
    head = insert_end(head, 4);
    traversal(head);
    
    head = insert_beginning(head, 100);
    head = insert_beginning(head, 200);
    traversal(head);

    head = insert_at_node(head, 900, 2);
    traversal(head);

    return 0;
}
