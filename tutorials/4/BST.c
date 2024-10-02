#include <stdio.h>

struct node {
	int value;
	struct node *left;
	struct node *right;
};

// Write a recursive function to count the total number of nodes in a tree.
int bstNumNodes(struct node *t) {
	// TODO
}

// Implement the following function that counts the number of odd values in a tree.
int bstCountOdds(struct node *t) {
    // TODO
}

// Implement the following function to count number of internal nodes in a given tree.
int bstCountInternal(struct node *t) {
	// TODO
}

// Write a recursive function to compute the height of a tree.
// The height of a tree is defined as the length of the longest path from the root to a leaf.
// The path length is a count of the number of links (edges) on the path.
// The height of an empty tree is -1.
int bstHeight(struct node *t) {
	// TODO
}

// Implement the following function that returns the level of the node
// containing a given key if such a node exists, otherwise the function
// returns -1 (when a given key is not in the binary search tree).
// The level of the root node is zero.
int bstNodeLevel(struct node *t, int key) {
    // TODO
}

// Implement the following function that counts the number of values that are greater than a given value.
// This function should access as few nodes as possible.
int bstCountGreater(struct node *t, int val) {
    // TODO
}