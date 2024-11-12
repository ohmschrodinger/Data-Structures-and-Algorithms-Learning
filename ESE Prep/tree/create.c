#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

struct Node* insert_node(struct Node* root, int n)
{
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
    ptr -> data = n;
    if(root== NULL)
    {
        ptr -> left = ptr -> right = NULL;
        return ptr;
    }
    if(n < root -> data)
    {
        root -> left = insert_node(root -> left, n);
    }
    if(n > root -> data)
    {
        root -> right = insert_node(root -> right, n);
    }
    return root;
}

void inorder_traversal(struct Node* root)
{
    if(root == NULL)
    {
        return;
    }
    inorder_traversal(root -> left);
    printf("%d ", root -> data);
    inorder_traversal(root -> right);
}

int search_node(struct Node* root, int n)
{
    if(root == NULL)
    {
        return 0;
    }
    if(n==root->data)
    {
        return 1;
    }
    if(n>root->data)
    {
        return search_node(root->right,n);
    }
    if(n<root->data)
    {
        return search_node(root->left,n);
    }
}
int main()
{
    struct Node* root = NULL;
    int arr[] = {5,3,1,7,9,2,4};
    for(int i = 0; i<7;i++)
    {
        root = insert_node(root, arr[i]); 
    }

    inorder_traversal(root);
    printf("\n");

    printf("%d ", search_node(root,99));
    return 0;
}