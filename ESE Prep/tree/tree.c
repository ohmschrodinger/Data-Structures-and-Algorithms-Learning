#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

struct Node* insertNode(struct Node* root, int n)
{
    struct Node* ptr = malloc;
    ptr -> data = n;

    if(root== NULL)
    {
        ptr->left = ptr-> right = NULL;
        return ptr;
    }

    if(n> root-> data)
    {
        root -> right = insertNode(root -> right, n);
    }

    if(n < root -> data)
    {
        root -> left = insertNode(root -> left, n);
    }

    return root;
}

void inroder_traversal(struct Node* root)
{
    if(root==NULL)
    {
        return NULL;
    }

    inroder_traversal(root -> left);
    printf("%d ", root->data);
    inroder_traversal(root -> right);
    return;
}


int search_node(struct Node* root, int n)
{
    if(root==NULL)
    {
        return 0; 
        // not found
    }

    if(n==root->data)
    {return 1;}
    if(n>root -> data)
    {
        return search_node(root-> right, n);
    }
    if(n<root -> data)
    {
        return search_node(root-> left, n);
    }
}


struct Node* find_min(struct Node* root)
{
    struct Node* p = root;
    while(p-> left != NULL)
    {
        p = p-> left;
    }
    return p;
}

struct Node* deleteNode(struct Node* root, int n)
{
    if(root == NULL)
    {
        return root;
    }

    if(n > root ->data)
    {
        root -> right = deleteNode(root -> right, n);
    }

    else if(n <root ->data)
    {
        root -> left = deleteNode(root -> left, n);
    }

    else{

        // pleaf node and single child
        if(root -> left == NULL)
        {
            struct Node* temp = root -> right;
            free(root);
            return temp;
        }

        else if(root -> right == NULL)
        {
            struct Node* temp = root -> left;
            free(root);
            return temp;
        }

        // succesor
        struct Node* temp = find_min(root -> right);
        root -> data = temp -> data;

        root -> right = deleteNode(root -> right, temp -> data);
    }

    return root;
}


int find_leafnodes(struct Node* root)
{
    
    if(root == NULL)
    {return 0;}

    if(root-> left == NULL && root -> right == NULL)
    {
     return 1;   
    }
    return find_leafnodes(root-> left) + find_leafnodes(root-> right);
}

int no_of_nodes(struct Node* root)
{
    if(root ==NULL)
    {
        return 0;
    }

    return 1 + no_of_nodes(root -> left) + no_of_nodes(root -> right);
}

int main()
{
   struct Node* root = NULL; 
    return 0;
}