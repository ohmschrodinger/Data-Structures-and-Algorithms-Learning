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

struct Node* create_circular_list(struct Node* head, int size)
{
    int i = 0;
    int n;
    struct Node* ptr = (struct Node*) malloc(sizeof(struct Node));
    while( i < size)
    {
        printf("Enter node number (%d):", i+1);
        scanf("%d",&n);
        head = insert_end(head, n);
        i++;
    }

    struct Node* p = head;
    while(p -> next !=NULL)
    {
        p=  p-> next;
    }
    p -> next = head;
    return head;
}

void check_circular(struct Node* head)
{
    struct Node* p = head;
     p = p -> next;

     while(1)
     {
        p = p -> next;
        if(p = head)
        {
            printf("Linked List is circular");
            return;
        }

        if( p -> next == NULL)
        {
            printf("Linked List is not circular");
            return;
        }
     }
}

int main()
{
    struct Node* head = NULL;
    
    head = create_circular_list(head, 5);
    //circular linked list is created now
    printf("\n");
    check_circular(head);
    return 0;
}