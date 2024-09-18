#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
    struct Node* prev;
};

struct Node* insert_node(struct Node* head, int n)
{
    struct Node* ptr = (struct Node*) malloc(sizeof(struct Node));
    struct Node* p = head;
    ptr -> data = n;
    ptr -> next = NULL;
    ptr -> prev = NULL;

    if(head == NULL)
    {
        return ptr;
    }
    else
    {
        while(p -> next != NULL )
        {
            p = p-> next;
        }
        p -> next = ptr;
        ptr -> prev = p;
        return head;
    }
}


void traversal(struct Node* head)
{
    struct Node* p = head;
    while(p != NULL)
    {
        printf("%d ", p-> data);
        p = p-> next;
    }
}

void find_mid(struct Node* head)
{
    struct Node* p = head;
    if(head == NULL)
    {
     printf("%d ", p -> data);
    }

    else
    {
        int n = 0;
        while(p != NULL)
        {
            n++;
            p = p-> next;
        }

        if(n%2 == 0)
        {
            int z = n/2;
            // int y = z + 1;

            p = head;
            int i = 1;
            while(i < z)
            {
                i++;
                p = p-> next;
            }

            printf("%d, %d", p -> data, (p->next) -> data);

        }

        else
        {
            int z = (n + 1)/2;
                        p = head;
            int i = 1;
            while(i < z)
            {
                i++;
                p = p-> next;
            }

            printf("%d ", p -> data);
        }


    }
}
int main()
{
    struct Node* head = NULL;

    head = insert_node(head, 0);
    head = insert_node(head, 1);
    head = insert_node(head, 2);
    head = insert_node(head, 3);
    head = insert_node(head, 4);
    head = insert_node(head, 5);

    traversal(head);
    printf("\n");

    find_mid(head);

    // traversal(head);

    return 0;
}
