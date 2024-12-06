#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* left;
    struct Node* right;
};

void inorder_traversal(struct Node* root)
{
    if(root == NULL)
    {
        return;
    }

    inorder_traversal(root -> left);
    printf("%d ", root -> data);
    inorder_traversal(root -> right);
    return;
}


void preorder_traversal(struct Node* root)
{
    if(root == NULL)
    {
        return;
    }

    printf("%d ", root -> data);
    preorder_traversal(root->left);
    preorder_traversal(root->right);
    return;
}

void postorder_traversal(struct Node* root)
{
    if(root == NULL)
    {
        return;
    }

    postorder_traversal(root->left);
    postorder_traversal(root->right);
    printf("%d ", root -> data);
    return;
}

struct Node* insert_node(struct Node* root, int n)
{
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
    ptr -> data = n;
    if(root==NULL)
    {
        ptr -> left = ptr -> right = NULL;
        return ptr;
    }

    if(n>root -> data)
    {
        root -> right = insert_node(root -> right, n);
    }

    else if(n < root -> data)
    {
        root -> left = insert_node(root -> left, n);
    }
    return root;
}


struct Node* search_minimum(struct Node* root)
{
    struct Node* temp = root;
    while(temp!= NULL && temp -> left != NULL)
    {
        temp = temp -> left;
    }

    return temp;
}


struct Node* delete_node(struct Node* root, int n)
{
    if(root == NULL)
    {
        return NULL;
    }

    if(n > root -> data)
    {
        root -> right = delete_node(root -> right, n);
    }

    else if(n < root -> data)
    {
        root -> left = delete_node(root -> left, n);
    }
    else{
        if(root -> left == NULL && root -> right == NULL)
        {
            free(root);
            return NULL;
        }

        else if(root-> left == NULL)
        {
            struct Node* temp = root -> right;
            free(root);
            return temp;
        }

        else if (root -> right == NULL)
        {
            struct Node* temp = root -> left;
            free(root);
            return temp;
        }

        struct Node* temp = search_minimum(root -> right);
        root -> data = temp -> data;
        root -> right = delete_node(root -> right, temp -> data);
    }

    return root;
}


int count_nodes(struct Node* root)
{
    if(root == NULL)
    {
        return 0;
    }

    return 1 + count_nodes(root->left) + count_nodes(root -> right);
}

int count_nodes_leaf(struct Node* root)
{
    if(root == NULL)
    {
        return 0;
    }

    if(root -> left == NULL && root -> right == NULL)
    {
        return 1;
    }

    return count_nodes_leaf(root-> left) + count_nodes_leaf(root -> right);
}
struct Node* parent(struct Node* root, int n)
{
    struct Node* parent = NULL;
    struct Node* current = root;
    while(current != NULL)
    {
        if(current -> data == n)
        {
            return parent;
        }

        parent = current;
         if(n > current -> data)
        {
            current = current -> right;
        }

        else if(n < current -> data)
        {
            current = current -> left;
        }
    }

    return NULL;
}


int main()
{
    struct Node* root = NULL;

    int arr[] = {5,1,2,7,10,9,4,6};

    for(int i = 0 ; i<8; i++)
    {
        root = insert_node(root, arr[i]);
    }

    inorder_traversal(root);
    printf("\n");
    postorder_traversal(root);
    printf("\n");
    preorder_traversal(root);
    printf("\n");
    // printf("Maxm: %d\n", search_maximum(root));
    // printf("Minm: %d\n", search_minimum(root));
    printf("No of nodes: %d\n", count_nodes(root));
}



#include <stdio.h>
#include<stdlib.h>

struct node{
    char data[50];
    struct node *next;
};
struct node *head,*tail=NULL;

void addNode(char data2[]){
    struct node *newNode=(struct node *)malloc(sizeof(struct node));
    for(int i=0;data2[i]!='\0';i++)
          newNode->data[i]=data2[i];
      newNode->next=NULL;
    newNode->next=NULL;
    if (head==NULL){
        head=newNode;
        tail=newNode;
    }
    else{
        tail->next=newNode;
        tail=newNode;
    }
}
void display(){
    struct node *current=head;
    if(head==NULL){
        printf("list is empty\n");
        return;
    }
    printf("Node of singly linked list(string)\n");
    while(current!=NULL){
        printf("%s ",current->data);
        current=current->next;
        
    }
    printf("\n");
}
int main() {
    char a[]="apple",b[]="banana",c[]="carrot";
    addNode(a);
    addNode(b);
    addNode(c);
    display();
    return 0;
}