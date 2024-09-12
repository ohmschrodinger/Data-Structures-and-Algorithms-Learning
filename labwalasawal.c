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

struct Node* merge_list(struct Node* head1, struct Node* head2)
{
    struct Node* p1 = head1;

    if(head1 == NULL)
    {
        return head2;
    }


    while(p1 -> next != NULL)
    {
        p1 = p1 -> next;
    }

    p1 -> next = head2;


    return head1;



}



struct Node* insert_odd_even(struct Node* head, struct Node* head1, struct Node* head2)
{
    struct Node* p = head1;
    struct Node* q = head2;
    struct Node* r = head;

    int n=1;
    while(p != NULL)
    {
        if( (n%2) != 0)
        {
            head = insert_end(head, p -> data);
        }

        else{
            head = insert_end(head, q -> data);
        
        }

        p = p -> next;
        q = q -> next;
      
        n++;

    }

    return head;
}

int main()
{
    struct Node* head = NULL;
    struct Node* head3 = NULL;
    for(int i = 10; i<=50; i = i + 10)
    {
        head = insert_end(head, i);
    }
   
    struct Node* head2 = NULL;
    for(int i = 1; i<=5; i = i + 1)
    {
        head2 = insert_end(head2, i);
    }
   
    traversal(head);
    printf("\n");
    traversal(head2);
    printf("\n");

    head3 = insert_odd_even(head3, head, head2);
    // head3 = merge_list(head, head2);

    traversal(head3);

   
    return 0;
}