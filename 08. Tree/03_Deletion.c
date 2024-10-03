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

struct Node* find_min(struct Node* node)
{
    while (node && node->left != NULL)
        node = node->left;
    return node;
}

struct Node* delete_node(struct Node* root, int key)
{
    if (root == NULL)
    {
        return root;
    }
    if (key < root->data)
        root->left = delete_node(root->left, key);
    else if (key > root->data)
        root->right = delete_node(root->right, key);
    else
    {
        if (root->left == NULL && root->right == NULL)
        {
            free(root);
            return NULL;
        }
        else if (root->left == NULL)
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

        struct Node* temp = find_min(root->right);
        root->data = temp->data;
        root->right = delete_node(root->right, temp->data);
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

    root = delete_node(root, 40);

    inorder_traversal(root);
    printf("\n");

    return 0;
}
