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

int search_node(struct Node* head, int index)
{
    struct Node* p = head;
    if(head==NULL)
    {
        return -1; //if the list is empty
    }

    int i = 0;
    while(i <= index-1 && p != NULL)
    {
        p = p-> next;
        i++;
    }

    if(i != index || p == NULL) return -1;
    else{

    return p -> data;
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

int main()
{
    struct Node* head = NULL;
    for(int i = 10; i<=50; i = i + 10)
    {
        head = insert_end(head, i);
    }
   
    traversal(head);
    printf("\n");

    int value = search_node(head, 3);
    printf("%d", value);
    return 0;
}