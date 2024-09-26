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

struct Node* createNode(int n)
{
    struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
    if(newNode == NULL)
    {
        printf("Overflow");
        exit(1);
    }

    newNode -> data = n;
    newNode -> left = newNode -> right = NULL;
    return newNode;
}

struct Node* insert_node(struct Node* root, int n)
{
    if(root == NULL)
    {
        root = createNode(n);
        return root;
    }

    if(n > root -> data)
    {
        root -> right = insert_node(root -> right, n);
    }

    else if(n < root -> data)
    {
        root -> left = insert_node(root -> left, n);
    }

    return root;
}

int search_tree(struct Node* root, int n)
{
    if(root == NULL) return 0; 
    if(root -> data == n)
    {
        return 1;
    }
    
    if(n < root -> data)
    {
        return search_tree(root -> left, n);
    }

    else
    {
        return search_tree(root -> right, n);
    }
} 


int main()
{
    struct Node* root = NULL;

    root = insert_node(root , 10);
    insert_node(root, 40);
    insert_node(root, 30);
    insert_node(root, 60);
    insert_node(root, 50);

    inorder_traversal(root);

    printf("\n");

    int result = search_tree(root, 30);

    printf("|%d|", result);
    return 0;
}