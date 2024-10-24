// Adjacency List and Adjacency Matrix Representations of a Graph
// Weighted and Directed Graph

// AdjList
struct graph {
    int nV;
    int nE;
    struct adjNode **adjList;
};

struct adjNode {
    int elem; // value of node
    int weight; // weight of edge
    struct adjNode *next;
};


// AdjMatrix
struct graph {
    int nV;
    int nE;
    int **edges;
};