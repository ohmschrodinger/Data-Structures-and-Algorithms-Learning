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


void inorder_traversal(struct Node* root)
{
    if(root == NULL)
    {
        return;
    }

    inorder_traversal(root->left);
    printf("%d ", root->data);
    inorder_traversal(root->right);
    
    return;
}

struct Node* min(struct Node* root)
{
    while (root->left != NULL)
        root = root->left;
    return root;
}

struct Node* delete_node(struct Node* root, int n)
{
    if (root == NULL)
        return root;

    if (n < root->data)
        root->left = delete_node(root->left, n);

    else if(n > root->data)
        root->right = delete_node(root->right, n);
    else
    {
        if (root->left == NULL)
        {
            struct Node* temp = root->right;
            free(root);
            return temp;
        
         }
        else if (root->right == NULL)
        {
            struct Node* temp = root->left;
            free(root);
            return temp;
        }
        struct Node* temp = min(root->right);
        root->data = temp->data;
        root->right = delete_node(root->right, temp->data);
    }
    return root;
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
    delete_node(root, 1);
    inorder_traversal(root);
    printf("\n");
    
    return 0;
}