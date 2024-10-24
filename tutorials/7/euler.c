/*
Write a function to check whether a path, supplied as an array of struct edges is an Euler path.
e[] is an array of nE edges, in path order.
*/

#include <stdio.h>
#include <stdbool.h>

typedef struct graph {
    int nV;
    int nE;
    int **edges; // Adj Matrix
} Graph;

struct edge {
    int v;
    int w;
};

// check whether a given path is a Euler path
bool isEulerPath(Graph g, struct edge e[], int nE) {
    // Euler Path Definition:
    // Visits every edge exactly once
    // Not a cycle
}