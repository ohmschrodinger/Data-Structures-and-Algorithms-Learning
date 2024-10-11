#include <stdio.h>
#include <stdlib.h>
struct Node{
    int data;
    struct Node* left;
    struct Node* right;
};

struct Node* insert_node(struct Node* root , int n)
{
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if(root == NULL)
    {
        newNode -> data = n;
        newNode -> left = newNode -> right = NULL;
        return newNode;
    }

    if(n > root -> data)
    {
        root -> right = insert_node(root -> right , n);
    }

    if(n < root -> data)
    {
        root -> left = insert_node(root -> left , n);
    }

    return root;
}

void preorder_traversal(struct Node* root)
{
    if(root == NULL)  return;
 
    printf("%d ", root -> data);
     preorder_traversal(root -> left);
     preorder_traversal(root -> right);

    return;
}

int main()
{

    struct Node* root = NULL;
    int arr[] = {5,3,1,7,9,2,4};
    for(int i = 0; i<7;i++)
    {
        root = insert_node(root, arr[i]); 
    }
    
    preorder_traversal(root);

    return 0;
}