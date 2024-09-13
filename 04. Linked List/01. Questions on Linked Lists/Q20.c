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

struct Node* delete_index(struct Node* head, int index){
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


struct Node* remove_duplicate(struct Node* head)
{
    struct Node* p = NULL;
    p -> next = head;
    struct Node* q= NULL;
    q = head;

    int len = list_length(head);
    for(int i = 0 ; i < len; i++)
    {
        p = p -> next;
        for(int j = 0; j < len ; j++)
        {
            q = q-> next;
            if (p -> data == q -> data)
            {
                //remove element
                head = delete_index(head,j);
            }

        }
    }

    return head;

}

int main()
{
    struct Node* head = NULL;
    head = insert_end(head, 5);
    head = insert_end(head, 1);
    head = insert_end(head, 1);
    head = insert_end(head, 8);
    head = insert_end(head, 3);
    head = insert_end(head, 3);
    head = insert_end(head, 15);
    head = insert_end(head, 11);
    head = insert_end(head, 7);
    head = insert_end(head, 3);
   
    traversal(head);
    printf("\n");
  
    head = sort_list(head);
    traversal(head);
    printf("\n");

    head = remove_duplicate(head);
    traversal(head);
   
    return 0;
}