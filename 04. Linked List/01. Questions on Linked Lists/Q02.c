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
    printf("%d ", ptr -> data);
    ptr = ptr -> next;
  }
}

struct Node* insert_beg(struct Node* head, int n)
{
  struct Node* ptr = (struct Node*) malloc(sizeof(struct Node));
  ptr-> data = n;
  if(head == NULL)
  {
    ptr -> next = NULL;
    return ptr;
  }

  ptr -> next  = head;
  return ptr;
}

struct Node* insert_end(struct Node* head, int n)
{
  struct Node* ptr = (struct Node*) malloc(sizeof(struct Node));
  struct Node* p = head;
  ptr-> data = n;
  if(head == NULL)
  {
    ptr -> next = NULL;
    return ptr;
  }
  else
  {
    while( p -> next != NULL )
    {
        p = p ->next;
    }
    p -> next = ptr;
    ptr -> next = NULL;
    return head;
  }
}

int main()
{
    struct Node* head = NULL;
    head = insert_end(head,20020);
    head = insert_beg(head, 100);
    printf("%d ", head -> data);
    head = insert_beg(head, 200);
    printf("%d ", head -> data);
    head = insert_beg(head, 300);
    printf("%d ", head -> data);
    head = insert_end(head, 5);
    printf("\n");
    traversal(head);
}