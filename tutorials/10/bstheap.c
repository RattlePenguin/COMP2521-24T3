#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct node {
    int value;
    struct node *left;
    struct node *right;
};

bool isMinHeap(struct node *root);
bool isMaxHeap(struct node *root);


int main(void) {
    struct node *root = malloc(sizeof(struct node));
    root->value = 1;
    root->left = malloc(sizeof(struct node));
    root->right= malloc(sizeof(struct node));

    root->left->value = 3;
    root->left->left = NULL;
    root->left->right = NULL;

    root->right->value = 5;
    root->right->left = NULL;
    root->right->right = NULL;

    if (isMinHeap(root)) {
        printf("is a min heap\n");
    }

    return 0;
}

bool isMinHeap(struct node *root) {
    if (root == NULL) {
        return true;
    }

    if (root->left != NULL && root->left->value < root->value) {
        return false;
    }

    if (root->right != NULL && root->right->value < root->value) {
        return false;
    }

    return isMinHeap(root->left) && isMinHeap(root->right);
}

bool isMaxHeap(struct node *root) {
    return false;
}