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

void traversal(struct Node* ptr)
{
  while(ptr != NULL)
  {
    printf("%d ", ptr -> data);
    ptr = ptr -> next;
  }
}

struct Node* delete_index(struct Node* head, int index)
{
  struct Node* p = head;
  struct Node* q = head;
  if(head ==NULL)
  {
    return NULL;
  }

  for(int i = 0; i<= index-2 ; i++)
  {
    p = p-> next;
    q = q-> next;
  }

p = p-> next;

q->next = p->next;
p->next = NULL;
free(p);

  return head;

}

int main()
{
    struct Node* head = NULL;

    for(int i = 10; i<=50; i = i + 10)
    {
        head = insert_end(head, i);
    }
    traversal(head);
    head = delete_index(head ,2);
    printf("\n");
    traversal(head);

    return 0;
}