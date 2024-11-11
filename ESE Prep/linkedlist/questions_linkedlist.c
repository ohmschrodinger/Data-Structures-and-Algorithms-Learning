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
        printf("%d ", p -> data);
        p = p-> next;
    }
    printf("\n");
    return;
}

void traversal_circular(struct Node* head)
{
    struct Node* p = head;
    do{
        printf("%d ", p -> data);
        p = p-> next;
    }while(p!=head);
 
    printf("\n");
    return;
}

struct Node* insert_beg(struct Node* head, int n)
{
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
    if(head == NULL)
    {
        ptr -> data = n;
        ptr -> next = NULL;
        return ptr;
    }

    ptr -> data = n;
    ptr -> next = head;
    return ptr;
}

struct Node* insert_end(struct Node* head, int n)
{
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
    if(head == NULL)
    {
        ptr -> data = n;
        ptr -> next = NULL;
        return ptr;
    }
    struct Node* p = head;

    while(p -> next != NULL)
    {
        p = p-> next;
    }

    p -> next = ptr;
    ptr -> data = n;
    ptr -> next = NULL;

    return head;
}

struct Node* insert_index(struct Node* head, int n, int index)
{
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
    if(head == NULL)
    {
        ptr -> data = n;
        ptr -> next = NULL;
        return ptr;
    }
    int i = 0;
    struct Node* p = head;
    while(i< index - 1)
    {
        p = p-> next;
        i++;
    }
    ptr -> data = n;
    ptr -> next = p-> next;
    p -> next = ptr;
    return head;
}

struct Node* delete_first(struct Node* head)
{
    if(head == NULL)
    {
        return head;
    }

    struct Node* p = head -> next;
    head -> next = NULL;
    free(head);
    return p;
}

struct Node* delete_last(struct Node* head)
{
    if(head == NULL)
    {
        return head;
    }

    struct Node* p = head;
    struct Node* q = head;
    while(p-> next != NULL)
    {
        q = p;
        p = p-> next;
    }

    q -> next = NULL;
    free(p);
    return head;
}

struct Node* delete_value(struct Node* head, int value)
{
    if(head == NULL)
    {
        return head;
    }

    struct Node* p = head;
    struct Node* q = head;
    while(p!= NULL && p-> data != value )
    {
        q = p;
        p = p-> next;
    }

    if(p==NULL)
    {
        printf("suchvaluenotfound\n");
        return head;
    }

    q -> next = p -> next;
    free(p);
    return head;
}

struct Node* delete_index(struct Node* head, int index)
{
    if(head == NULL)
    {
        return head;
    }
    if(index == 0)
    {
        head = delete_first(head);
        return head;
    }

    int i = 0;
    struct Node* p = head;
    struct Node* q = head;
    while(i< index)
    {
        q = p;
        p = p-> next;
        i++;
    }
    q -> next = p-> next;
    p -> next = NULL;
    free(p);
    return head;
}

int search_node_value(struct Node* head, int value)
{
    struct Node* p = head;
    int index = 0;
    while(p!=NULL)
    {
        if(value== p-> data)
        {
            return index;
        }

        p = p-> next;
        index++;
    }
    return -1;
}

int search_node_index(struct Node* head, int index)
{
    struct Node* p = head;

    if(head==NULL)
    {
        return -1;
    }

    int i = 0;

    while(i < index)
    {
        if(p!=NULL)
        {
        p = p-> next;
        }
        if(p==NULL)
        {
            return -1;
        }
        i++;
    }
    return p->data;
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

int find_length(struct Node* head)
{
    int i = 0;
    if(head == NULL)
    {
        return i;
    }

    struct Node* p = head;
    while(p!= NULL)
    {
        p = p-> next;
        i++;
    }
    return i;
}

struct Node* insert_end_circular(struct Node* head, int n)
{
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
    if(head == NULL)
    {
        ptr -> data = n;
        ptr -> next = ptr;
        return ptr;
    }
    struct Node* p = head;

    while(p -> next != head && p -> next != NULL)
    {
        p = p-> next;
    }

    p -> next = ptr;
    ptr -> data = n;
    ptr -> next = head;

    return head;
}

int is_circular(struct Node* head)
{
    struct Node* p = head;
    do{
        p = p-> next;
        if(p==head)
        {
            return 1;
        }
        if(p == NULL)
        {
            return -1;
        }
    }while(1);
}

int find_middle(struct Node* head)
{
    struct Node* p = head;
    struct Node* q = head;
    while(p != NULL && p -> next !=NULL)
    {
        q = q -> next;
        p = (p -> next) -> next;
    }
    return(q-> data);
}

int find_nth_node_from_end(struct Node* head, int n)
{
    struct Node* p = head;
    struct Node* q = head;
    int i = 1;
    while(i<n)
    {
        q = q -> next;
        i++;
    }
    while(q->next != NULL)
    {
        p = p-> next;
        q = q-> next;
    }
    return p-> data;
}


struct Node* remove_duplicates(struct Node* head)
{
    struct Node* p = head;
    struct Node* q = head -> next;

    while(q -> next != NULL)
    {
        if(p->data == q-> data)
        {
            head = delete_value(head, p-> data);
            head = remove_duplicates(head);
        }
        p = p-> next;
        q = q-> next;
    }
return head;

}

// ALTERNATE METHOD
struct Node* remove_duplicate(struct Node* head) {
    struct Node* current = head;

    while (current != NULL && current->next != NULL) {
        if (current->data == current->next->data) {
            struct Node* duplicate = current->next;
            current->next = current->next->next;
            free(duplicate);
        } else {
            current = current->next;
        }
    }
    return head;
}

struct Node* remove_duplicates_unsorted(struct Node* head)
{
    struct Node* p = head;
    while(p!= NULL &&  p-> next != NULL)
    {
        struct Node* q = p;
        while(q-> next != NULL && q!=NULL)
        {
            if(q-> next -> data == p-> data)
            {
                struct Node* temp = q-> next;
                q -> next = temp -> next;
                free(temp);
            }

            else{
                q = q-> next;
            }
        }
        p = p-> next;
    }
    return head;
}

void split_list(struct Node* head, struct Node** first_half, struct Node** second_half)
{
    struct Node* p = head;
    struct Node* q = head -> next;
    while(q!= NULL && q-> next != NULL)
    {
        q = q-> next -> next;
        p = p-> next;
    }

    *first_half = head;
    *second_half = p -> next;
    p -> next = NULL;
}

void swap_nodes(struct Node* head, int first, int second)
{
        struct Node* p = head;
        struct Node* q = head;
        int i = 0, j = 0;
        while(i<first)
        {
            p = p-> next;
        }
        while(j<second)
        {
            q = q-> next;
        }

        struct Node** p_pointer = &p;
        struct Node** q_pointer = &q;

        struct Node** temp;

        // *temp = **p;
        // **p = **q;
        // **q = *temp;
}


int main()
{
    struct Node* head = NULL;
    // head = insert_end(head, 10);
    // head = insert_end(head, 20);
    // head = insert_end(head, 30);
    // head = insert_beg(head, 10);
    // head = insert_beg(head, 20);
    // head = insert_beg(head, 30);
    // head = insert_index(head,100,2);
    // head = delete_first(head);
    // head = delete_last(head);
    // head = delete_value(head, 300);
    // head = delete_value(head,10);
    // head = insert_end(head,300);
    // traversal(head);
    // int result = search_node_index(head,4);
    // head = reverse_list(head);
    // traversal(head);
    // int result = find_length(head);
    // head = insert_end_circular(head,600);
    // int result = is_circular(head);
    // traversal_circular(head);
    // head = insert_end(head,1000);
    // traversal(head);
    // int result = find_nth_node_from_end(head,4);
    // printf("%d\n", result);

    head = insert_end(head,10);
    head = insert_end(head,40);
    head = insert_end(head,20);
    head = insert_end(head,30);
    head = insert_end(head,60);
    head = insert_end(head,20);
    head = insert_end(head,40);
    head = insert_end(head,90);
    head = insert_end(head,60);
    head = insert_end(head,80);
    head = insert_end(head,60);
    head = insert_end(head,50);
    // traversal(head);
    head = remove_duplicates_unsorted(head);
    traversal(head);

    // struct Node* first_half = NULL;
    // struct Node* second_half = NULL;
    // struct Node** idk = &first_half;
    // split_list(head, idk, &second_half);
    // traversal(first_half);
    // traversal(second_half);

    
    return 0;
}



// 24