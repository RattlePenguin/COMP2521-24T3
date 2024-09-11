// Implement a function to delete the first instance of a value from a list, if it exists. Use the following list representation and prototype:
struct node {
    int value;
    struct node *next;
};

struct node *listDelete(struct node *list, int value);



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