#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

void traversal(struct Node* head)
{
    struct Node* p = head;
    while(p!=NULL)
    {
        printf("%d ", p-> data);
        p = p-> next;
    }

    printf("\n");
}

struct Node* createNode(int n)
{
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
    if(ptr == NULL)
    {
        printf("Memory Overflow");
        exit(1);
    }

    ptr -> data = n;
    ptr -> next = NULL;

    return ptr;
}


struct Node* insert_beg(struct Node* head, int n)
{
    struct Node* ptr = (struct Node*) malloc(sizeof(struct Node));
    ptr -> data = n;
    if(head == NULL)
    {
        ptr -> next = NULL;
        return ptr;
    }

    ptr -> next = head;
    return ptr;
}

struct Node* insert_end(struct Node* head, int n)
{
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
    ptr -> data = n;
    if(head == NULL)
    {
        ptr ->next = NULL;
        return ptr;
    }

    struct Node* p = head;
    while(p -> next != NULL)
    {
        p = p-> next;
    }

    p -> next = ptr;
    ptr -> next = NULL;

    return head;
}

struct Node* insert_index(struct Node* head, int n, int index)
{
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
    ptr -> data = n;
    int i = 0;

    struct Node* p = head;

    if(index == 0)
    {
        ptr -> next = head;
        return ptr;
    }

    while(p!= NULL && i< index-1)
    {
        p = p-> next;
        i++;
    }


    ptr -> next = p-> next;
    p -> next = ptr;

    return head;
}


struct Node* delete_beg(struct Node* head)
{
    struct Node* p = head;
    if(head == NULL)
    {
        printf("list is empty");
        return NULL;
    }

    head = head -> next;
    p -> next = NULL;
    free(p);
    return head;
}

struct Node* delete_end(struct Node* head)
{
    struct Node* p = head;
    if(head -> next == NULL)
    {
        free(head);
        return NULL;
    }
    struct Node* q;

    while(p-> next != NULL)
    {
        q = p;
        p = p-> next;
    }

    q -> next = NULL;
    free(p);
    return head;;
}

struct Node* delete_index(struct Node* head, int index)
{
    struct Node* p = head;
    struct Node* q;

    int i = 0;
    while(i< index)
    {
        q = p;
        p = p-> next;
    }

    q -> next = p-> next;
    free(p);
    return head;
}

struct Node* reverse_list(struct Node* head)
{
    struct Node* prev = NULL;
    struct Node* current = head;
    struct Node* next = NULL;

    while(current != NULL)
    {
        next = current -> next;
        current -> next = prev;
        prev = current;
        current = next;
    }

    return prev;
}

// search for a node by its index
int search_node(struct Node* head, int index)
{
    struct Node* p = head;
    if(head == NULL)
    {
        return -1;
    }
    int i = 0;
    while(i<index)
    {
        if(p==NULL)
        {
            return -1;
        }

        p = p-> next;
        i++;
    }

    return p->data;
}


// detecting a loop
int detect_loop(struct Node* head)
{
    struct Node* p = head;
    while(p!=NULL)
    {
        if(p-> next == head)
        {
            //true
            return 1;
        }
        p = p-> next;
    }

    return -1;
}

// find the middle element
int find_middle_element(struct Node* head)
{
    struct Node* p = head;
    struct Node* q = head;
    if(head == NULL)
    {
        return -1;
    }

    while(p!=NULL && p-> next != NULL)
    {
        p = p-> next -> next; //fast pointer
        q = q-> next; // slow pointer
    }

    return q-> data;
}

// find nth node from the end
int find_nth_end(struct Node* head, int n)
{
    struct Node* p = head;
    struct Node* q = head;

    int i = 1;
    while(i<n)
    {
        p = p-> next;
        i++;
    }

    while(p!=NULL)
    {
        p = p-> next;
        q = q-> next;
    }

    return q -> data;
}

// Delete Duplicates 
struct Node* duplicates_remove(struct Node* head, int key)
{
    struct Node* p = head;
    struct Node* q = p;
    if(head==NULL)
    {
        return NULL;
    }

    while(p!=NULL && p-> next != NULL)
    {
        if(p->data == p-> next -> data)
        {
            struct Node* q = p -> next;
            p -> next = q -> next;
            free(q);

        }

        else
        {
            p = p-> next;
        }
    }
}
// intersection of two linked list
struct Node* find_intersection(struct Node* head1, struct Node* head2)
{
    struct Node* p = head1;
    struct Node* q = head2;

    while(p!=q)
    {
        if(p== NULL)
        {
            p = head2;
        }
        else{
            p = p-> next;
        }


        if(q == NULL)
        {
            q = head1;
        }
        else{
            q = q-> next;
        }
    }

    return p;
    //TIME COMPLEXITY O(m+n)
}


// split the list

// double pointers
// check palindrome

// DOUBLY LINKED LIST AND CIRCULAR LINKED LIST

int main()
{
    return 0;
}