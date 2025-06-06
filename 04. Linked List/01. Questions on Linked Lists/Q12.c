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


struct Node* reverse_list(struct Node* head)
{
  struct Node* prev = NULL;
  struct Node* current = head;
  struct Node* next = NULL;
  while(current!=NULL)
  {
    next = current-> next;
    current -> next = prev;
    prev = current;
    current = next;
  }
  return prev;
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
    head = reverse_list(head);
    traversal(head);

   
    return 0;
}