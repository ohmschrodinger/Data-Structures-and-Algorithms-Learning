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
  return;
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

void delete_list(struct Node* head)
{
        struct Node* p = head;
    while(p->next != NULL)
    {
        struct Node* q = p -> next;
        struct Node* r = p -> next -> next;

        p -> next = r;
        q -> next = NULL;
        free(q);

    }
    free(p);
}
int main()
{

    struct Node* head = NULL;
    head = insert_end(head, 5);
    head = insert_end(head, 1);
    head = insert_end(head, 10);
    head = insert_end(head, 8);
    head = insert_end(head, 3);
   
    traversal(head);
    printf("\n");
  
    delete_list(head);
    printf("\n%d", head -> data);
   
    return 0;
}