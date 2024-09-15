#include <stdio.h>
#include <stdlib.h>
struct Node{
    int data;
    struct Node* next;
    struct Node* prev;
};

struct Node* insert_node(struct Node* head, int n) {
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
    ptr->data = n;
    ptr->next = NULL;
    ptr->prev = NULL;

    if (head == NULL) {
        return ptr;
    }

    struct Node* p = head;
    while (p->next != NULL) {
        p = p->next;
    }
    p->next = ptr;
    ptr->prev = p;

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

struct Node* insert_ascending(struct Node* head, int n) {
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
    ptr->data = n;
    ptr->next = NULL;
    ptr->prev = NULL;

    if (head == NULL || head->data >= n) {
        ptr->next = head;
        if (head != NULL) {
            head->prev = ptr;
        }
        return ptr;
    }

    struct Node* p = head;
    while (p->next != NULL && p->next->data < n) {
        p = p->next;
    }

    ptr->next = p->next;
    if (p->next != NULL) {
        p->next->prev = ptr;
    }
    p->next = ptr;
    ptr->prev = p;

    return head;
}

int main() {
    struct Node* head = NULL;
    head = insert_node(head, 1);
    head = insert_node(head, 2);
    head = insert_node(head, 3);
    head = insert_node(head, 5);
    head = insert_node(head, 6);
    head = insert_node(head, 7);


    traversal(head);
    head = insert_ascending(head, 4);
    traversal(head);

    return 0;
}
