#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

// struct num{
//     int d; //ascii value is 100
//     int c; //ascii value is 99
//     int b; //ascii value is 98
//     int a; //ascii value is 97
// };


void traversal(struct Node* ptr)
{
    while(ptr!= NULL)
    {
        printf("%d ", ptr-> data);
        ptr = ptr -> next;
    }
}

struct Node* insert_beg(struct Node* head , int n){
    struct Node* p = (struct Node* ) malloc(sizeof(struct Node));
    p -> data = n;
    p -> next = head;
    
    return p;
}


int main()
{
    struct Node* linked_list_one = (struct Node* )malloc(sizeof(struct Node));
    struct Node* linked_list_two = (struct Node* )malloc(sizeof(struct Node));
    struct Node* linked_list_three = (struct Node* )malloc(sizeof(struct Node));

    linked_list_one -> next = NULL;
    linked_list_two -> next = NULL;
    linked_list_three -> next = NULL;
    linked_list_one -> data = NULL;
    linked_list_two -> data = NULL;
    linked_list_three -> data = NULL;
    // struct Node* head1 = (struct Node*) malloc(sizeof(struct Node));
    // struct Node* second1 = (struct Node*) malloc(sizeof(struct Node));
    // struct Node* third1 = (struct Node*) malloc(sizeof(struct Node));
    // struct Node* fourth1 = (struct Node*) malloc(sizeof(struct Node));
    
    // struct Node* head2 = (struct Node*) malloc(sizeof(struct Node));
    // struct Node* second2 = (struct Node*) malloc(sizeof(struct Node));
    // struct Node* third2 = (struct Node*) malloc(sizeof(struct Node));
    // struct Node* fourth2 = (struct Node*) malloc(sizeof(struct Node));
    
    // struct Node* head3 = (struct Node*) malloc(sizeof(struct Node));
    // struct Node* second3 = (struct Node*) malloc(sizeof(struct Node));
    // struct Node* third3 = (struct Node*) malloc(sizeof(struct Node));
    // struct Node* fourth3 = (struct Node*) malloc(sizeof(struct Node));


    // struct Node* hey1 = (struct Node*) malloc (sizeof(struct Node));
    // struct Node* oof = (struct Node*) malloc (sizeof(struct Node));

    // hey1 -> next = NULL;

    // head1 -> next = second1;
    // second1 -> next = third1;
    // third1 -> next = fourth1;
    // fourth1 -> next = NULL;

    // head2 -> next = second2;
    // second2 -> next = third2;
    // third2 -> next = fourth2;
    // fourth2 -> next = NULL;

    // head3 -> next = second3;
    // second3 -> next = third3;
    // third3 -> next = fourth3;
    // fourth3 -> next = NULL;

    int number1, number2;
    printf("Enter any four digit number: ");
    scanf("%d", &number1);
    printf("Enter another four digit number: ");
    scanf("%d", &number2);


    // while(number > 0)
    // {

    //     int remainder = number % 10;
    //     printf("remainder: %d\n", remainder);
    //     number = number / 10;
    //     char alpha = char(z);
    //     number1.alpha = remainder;
    //     z--;
    // }
    while(number1 > 0)
    {
        int rem1 = number1 % 10;
        int rem2 = number2 % 10;
        
        linked_list_one = insert_beg(linked_list_one, rem1);
        linked_list_two = insert_beg(linked_list_two, rem2);
        linked_list_three = insert_beg(linked_list_three, rem1 + rem2);
        number1 = number1 / 10;
        number2 = number2 / 10;
    }

    traversal(linked_list_one);
    printf("\n");
    traversal(linked_list_two);
    printf("\n");
    traversal(linked_list_three);


    // for(int i = 1; i<=4 ;i++)
    // {
    //     int remainder1 = number1 % 10;
    //     int remainder2 = number2 % 10;
    //     // printf("remainder: %d\n", remainder1);
    //     number1 = number1 / 10;
    //     number2 = number2 / 10;

    //     if(i==1)
    //     {

    //         fourth1 -> data = remainder1;
    //         fourth2 -> data = remainder2;
    //         fourth3 -> data = remainder1 + remainder2;

    //     }
    //     else if(i==2)
    //     {

    //         third1 -> data = remainder1;
    //         third2 -> data = remainder2;
    //         third3 -> data = remainder1 + remainder2;
    //     }
    //     else if(i==3)
    //     {
    //         second1 -> data = remainder1;
    //         second2 -> data = remainder2;
    //         second3 -> data = remainder1 + remainder2;
    //     }
    //     else if(i==4)
    //     {
     
    //         head1 -> data = remainder1;
    //         head2 -> data = remainder2;
    //         head3 -> data = remainder1 + remainder2;
    //     }
    // }


    // traversal(head1);
    // printf("\n");
    // traversal(head2);
    // printf("\n");
    // traversal(head3);
    // printf("\n");
 
    return 0;
}