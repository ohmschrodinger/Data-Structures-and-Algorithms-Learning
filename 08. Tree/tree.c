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
    preorder_traversal(root -> left);
    preorder_traversal(root -> right);
    return;
}


void postorder_traversal(struct Node* root)
{
    if(root == NULL)
    {
        return;
    }

    postorder_traversal(root -> left);
    postorder_traversal(root -> right);
    printf("%d ", root -> data);

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
int main()
{
    struct Node* root = NULL;

    root = insert_node(root , 10);
    insert_node(root, 40);
    insert_node(root, 30);
    insert_node(root, 60);
    insert_node(root, 50);

    inorder_traversal(root);
    return 0;
}