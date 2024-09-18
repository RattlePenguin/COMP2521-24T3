#include <stdio.h>
#include <stdlib.h>

// Implement a function to delete the first instance of a value from a list, if it exists. Use the following list representation and prototype:
struct node {
    int value;
    struct node *next;
};

struct node *newNode(int value);
struct node *listAppend(struct node *list, int value);
void printList(struct node *list);
void listFree(struct node *list);
struct node *listDelete(struct node *list, int value);

int main(int argc, char *argv[]) {
    struct node *list = NULL;
    for (int i = 0; i < 10; ++i) {
        list = listAppend(list, i);
    }

    printList(list);
    int value = 5;
    listDelete(list, value);
    printList(list);

    listFree(list);
    
    return 0;
}

// Creates a new node with a value
struct node *newNode(int value) {
    struct node *new = malloc(sizeof(struct node));
    new->value = value;
    new->next = NULL;
    return new;
}

// Creates a new node with a value and appends it to list. Returns head of list
struct node *listAppend(struct node *list, int value) {
    struct node *new = newNode(value);

    // List is empty
    if (list == NULL) {
        return new;
    }

    // List is not empty
    struct node *curr = list;
    while (curr->next != NULL) {
        curr = curr->next;
    }

    // curr->next is NULL
    curr->next = new;

    // return head
    return list;
}

// Prints all values in a linked list
void printList(struct node *list) {
    printf("%d", list->value);
    list = list->next;
    while (list != NULL) {
        printf(" - %d", list->value);
        list = list->next;
    }

    printf("\n");
}

// Frees a linked list given its head
void listFree(struct node *list) {
    if (list == NULL) {
        return;
    }
    listFree(list->next);
    free(list);
}

// Deletes first occurrence of a node with given value in a linked list
// returns head of list
struct node *listDelete(struct node *list, int value) {
    // List is empty
    if (list == NULL) {
        return list;
    }

    // Delete head
    if (list->value == value) {
        struct node *next = list->next;
        free(list);
        return next;
    }

    // Main body: next node is toDelete
    if (list->next != NULL && list->next->value == value) {
        struct node *toDelete = list->next;
        list->next = list->next->next;
        free(toDelete);
    }

    listDelete(list->next, value);
    return list;
}


// How would the implementation and prototype be different if the following list representation was used instead?
/*
struct node {
    int value;
    struct node *next;
};

struct list {
	struct node *head;
};
*/