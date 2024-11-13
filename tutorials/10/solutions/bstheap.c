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
struct node *makeMinHeap();
struct node *makeMaxHeap();

int main(void) {
    struct node *minHeap = makeMinHeap();
    struct node *maxHeap = makeMaxHeap();
    
    struct node *test = maxHeap;
    if (isMinHeap(test)) {
        printf("is a min heap\n");
    } else if (isMaxHeap(test)) {
        printf("is a max heap\n");
    } else {
        printf("is neither\n");
    }

    // free memory but lazy

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
    if (root == NULL) {
        return true;
    }

    if (root->left != NULL && root->left->value > root->value) {
        return false;
    }

    if (root->right != NULL && root->right->value > root->value) {
        return false;
    }

    return isMaxHeap(root->left) && isMaxHeap(root->right);
}


////////////////////////////////////////////////////////////////////////////////
struct node *makeMinHeap() {
    struct node *root = malloc(sizeof(struct node));
    root->value = 1;
    root->left = malloc(sizeof(struct node));
    root->right= malloc(sizeof(struct node));

    root->left->value = 2;
    root->left->left = malloc(sizeof(struct node));
    root->left->right = malloc(sizeof(struct node));

    root->left->left->value = 4;
    root->left->left->left = NULL;
    root->left->left->right = NULL;

    root->left->right->value = 6;
    root->left->right->left = NULL;
    root->left->right->right = NULL;

    root->right->value = 3;
    root->right->left = malloc(sizeof(struct node));
    root->right->right = malloc(sizeof(struct node));

    root->right->left->value = 5;
    root->right->left->left = NULL;
    root->right->left->right = NULL;

    root->right->right->value = 7;
    root->right->right->left = NULL;
    root->right->right->right = NULL;

    return root;
}

struct node *makeMaxHeap() {
    struct node *root = malloc(sizeof(struct node));
    root->value = 7;
    root->left = malloc(sizeof(struct node));
    root->right= malloc(sizeof(struct node));

    root->left->value = 5;
    root->left->left = malloc(sizeof(struct node));
    root->left->right = malloc(sizeof(struct node));

    root->left->left->value = 1;
    root->left->left->left = NULL;
    root->left->left->right = NULL;

    root->left->right->value = 2;
    root->left->right->left = NULL;
    root->left->right->right = NULL;

    root->right->value = 6;
    root->right->left = malloc(sizeof(struct node));
    root->right->right = malloc(sizeof(struct node));

    root->right->left->value = 3;
    root->right->left->left = NULL;
    root->right->left->right = NULL;

    root->right->right->value = 4;
    root->right->right->left = NULL;
    root->right->right->right = NULL;

    return root;
}