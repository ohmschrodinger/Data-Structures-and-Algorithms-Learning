#include <stdio.h>
#include <stdlib.h>
struct Node {
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

int list_length(struct Node* head)
{
    int i = 0;
    struct Node* p = head;
    while(p != NULL)
    {
        i++;
        p = p-> next;
    }
    //i returns the length and not the last index.

    return i;
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

    int nodes = list_length(head);
    printf("%d",nodes);


   
    return 0;
}