Set reachable(Graph g, int src) {
    Set visited = newSet()
    
    dfs(g, v, visited);
    // setRemove(visited, v)
    return visited;
}

void dfs(Graph g, int v, Set visited) {
    setAdd(visited, v);

    for (int i = 0; i < GraphNumVertices(g); ++i) {
        if (GraphIsAdjacent(g, v, i) && !SetContains(v)) {
            dfs(g, i, visited);
        }
    }
}
