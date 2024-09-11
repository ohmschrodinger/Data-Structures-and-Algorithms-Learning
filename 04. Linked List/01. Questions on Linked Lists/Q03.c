#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* insert_end(struct Node* head, int n)
{
  struct Node* ptr = (struct Node*) malloc(sizeof(struct Node));
  ptr-> data = n;

  struct Node* p = head;
  if(head == NULL)
    {
        ptr -> next = NULL;
        return ptr;
    }

  else{
    while(p-> next != NULL)
    {
        p = p -> next;
    }

    p-> next = ptr;
    ptr -> next = NULL;

    return head;
  }
}

struct Node* insert_after_node(struct Node* head, int n, int key)
{
 struct Node* ptr = (struct Node*) malloc(sizeof(struct Node));
 ptr -> data = n;
 struct Node* p = head;

 

 while(p -> data != key && p != NULL)
 {
    p = p -> next;

 }

 if(p==NULL)
 {
    return head;
 }

 else{

 ptr -> next = p-> next;
 p -> next = ptr;

 return head;

 }
}

void traversal(struct Node* ptr)
{
  while(ptr != NULL)
  {
    printf("%d ", ptr -> data);
    ptr = ptr -> next;
  }
  return;
}

int main()
{
    struct Node* head = NULL;

    for(int i = 10; i<=50; i = i + 10)
    {
        head = insert_end(head, i);
    }
    traversal(head);
    printf("\n");
    head = insert_after_node(head, 1000, 30);
    traversal(head);
    return 0;
}