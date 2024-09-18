#include <stdio.h>
#include <stdlib.h>

// Write a function to sum the values in the list. Implement it first using while and then using for.
struct node {
	int value;
	struct node *next;
};

int sumListWhile(struct node *list);
int sumListFor(struct node *list);

int main(int argc, char *argv[]) {
    struct node *curr = malloc(sizeof(struct node));
    curr->value = 10;
    curr->next = NULL;
    
    // Creates a new node, and makes its next node the curr node.
    for (int i = 0; i < 10; ++i) {
        struct node *new = malloc(sizeof(struct node));
        new->value = i;
        new->next = curr;
        curr = new;
    }

    printf("sumListWhile: %d\n", sumListWhile(curr));
    printf("sumListFor: %d\n", sumListFor(curr));

    while (curr != NULL) {
        struct node *temp = curr;
        curr = curr->next;
        free(temp);
    }

    return 0;
}

int sumListWhile(struct node *list) {
    int sum = 0;
    while (list != NULL) {
        sum += list->value;
        list = list->next;
    }

    return sum;
}

int sumListFor(struct node *list) {
    int sum = 0;
    for (struct node *curr = list; curr != NULL; curr = curr->next) {
        sum += curr->value;
    }

    return sum;
}