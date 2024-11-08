#include <stdio.h>
#include <stdlib.h>

// Define the TreeNode structure
struct TreeNode {
    int value;
    struct TreeNode* left;
    struct TreeNode* right;
};

// Helper function to create a new TreeNode
struct TreeNode* createNode(int value) {
    struct TreeNode* newNode = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    newNode->value = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}


int sumSubtree(struct TreeNode* node) {
    if (node == NULL)
        return 0;
    return node->value + sumSubtree(node->left) + sumSubtree(node->right);
}


int differenceRightLeft(struct TreeNode* node) {
    if (node == NULL)
        return 0;
    int leftSum = sumSubtree(node->left);
    int rightSum = sumSubtree(node->right);
    return rightSum - leftSum;
}


void differenceAtAllNodes(struct TreeNode* node) {
    if (node == NULL)
        return;

    int diff = differenceRightLeft(node);
    printf("Node %d: Right Subtree Sum - Left Subtree Sum = %d\n", node->value, diff);

    differenceAtAllNodes(node->left);
    differenceAtAllNodes(node->right);
}

int main() {
    // Construct the following binary tree:
    //         10
    //        /  \
    //       5    15
    //      / \     \
    //     2   7     20
    struct TreeNode* root = createNode(10);
    root->left = createNode(5);
    root->right = createNode(15);
    root->left->left = createNode(2);
    root->left->right = createNode(7);
    root->right->right = createNode(20);

    // Calculate and print the difference for each node
    differenceAtAllNodes(root);

    // Free the allocated memory (simple but incomplete for illustration)
    free(root->left->left);
    free(root->left->right);
    free(root->right->right);
    free(root->left);
    free(root->right);
    free(root);

    return 0;
}
