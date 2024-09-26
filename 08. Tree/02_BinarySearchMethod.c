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

int flag = 0;
int inorder_traversal_search(struct Node* root, int n)
{
    if(root == NULL)
    {
        return 0;
    }

    inorder_traversal_search(root -> left, n);
    printf("root data: %d\n", root-> data);
    int x = root -> data;
    if(x == n)
    {
        return 1;
    }
    inorder_traversal_search(root -> right, n);

    
}


int main()
{
    struct Node* root = NULL;

    root = insert_node(root , 10);
    insert_node(root, 40);
    insert_node(root, 30);
    insert_node(root, 60);
    insert_node(root, 50);

    // inorder_traversal(root);



    printf("\n\n\n");

    int result = inorder_traversal_search(root, 100);

    printf("|%d|", result);
    return 0;
}


// int search_tree(struct Node* root, int n)
// {
//     int flag = 0;
//     int key = 1;
//     while(key != NULL)
//     {
//         inorder_traversal(root);
//         if(key==n)
//         {
//             flag++;
//             return 1;
//         }
//     }

//     return 0;
// }