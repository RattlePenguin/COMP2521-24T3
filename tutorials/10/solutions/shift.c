#include <stdio.h>
#include <stdlib.h>

struct node {
    int value;
    struct node *next;
};

struct node *shift(struct node *root);
struct node *shiftMany(struct node *root, int n);

int main(void) {
    struct node *root = malloc(sizeof(struct node));
    root->value = 10;
    root->next = NULL;

    for (int i = 9; i > 0; --i) {
        struct node *new = malloc(sizeof(struct node));
        new->value = i;
        new->next = root;
        root = new;
    }

    struct node *curr = root;
    while (curr != NULL) {
        printf("%d, ", curr->value);
        curr = curr->next;
    }
    printf("\n");

    root = shift(root);
    
    curr = root;
    while (curr != NULL) {
        printf("%d, ", curr->value);
        curr = curr->next;
    }
    printf("\n");

    root = shiftMany(root, 3);
    curr = root;
    while (curr != NULL) {
        printf("%d, ", curr->value);
        curr = curr->next;
    }
    printf("\n");

    return 0;
}

struct node *shift(struct node *root) {
    // Base cases
    if (root == NULL || root->next == NULL) {
        return root;
    }

    // second last
    if (root->next->next == NULL) {
        struct node *newHead = root->next;
        root->next = NULL;
        return newHead;
    }

    struct node *newHead = shift(root->next);
    newHead->next = root;
    return newHead;
}

struct node *shiftMany(struct node *root, int n) {
    for (int i = 0; i < n; ++i) {
        root = shift(root);
    }
    return root;
}