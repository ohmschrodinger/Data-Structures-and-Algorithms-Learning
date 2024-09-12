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


struct Node* sort_list(struct Node* head)
{
    if(head == NULL)
    {
        return NULL;
    }

    struct Node* p = head;
    int n=0;
    while(p != NULL)
    {
        p = p -> next;
        n++;
    }

    for(int i = 0; i<n ; i++)
    {
    struct Node* p = head;
    int temp;
        struct Node* q = head;
        q = q-> next;
        for(int j =0 ; j < n-i-1 ; j++)
        {

            if(p -> data > q -> data )
            {
                //swap my ass
                temp = q-> data;
                q -> data = p -> data;
                p -> data = temp;
            }
            q = q-> next;
            p = p -> next;
        }
    }

    return head;
}


int main()
{
    // struct Node* head = NULL;
    // struct Node* head3 = NULL;
    // for(int i = 10; i<=50; i = i + 10)
    // {
    //     head = insert_end(head, i);
    // }
   
    struct Node* head = NULL;
    head = insert_end(head, 5);
    head = insert_end(head, 1);
    head = insert_end(head, 10);
    head = insert_end(head, 8);
    head = insert_end(head, 3);
   
    traversal(head);
    printf("\n");
  
    head = sort_list(head);
    traversal(head);
    printf("\n");
   
    return 0;
}