#include <iostream>
using namespace std;

int adj[10][10], visited[10];

bool dfs(int node, int parent, int V) {
    visited[node] = 1;
    for (int i = 0; i < V; i++) {
        if (adj[node][i]) {
            if (!visited[i]) {
                if (dfs(i, node, V)) return true;
            } else if (i != parent) return true;
        }
    }
    return false;
}

int main() {
    int V = 5, E = 5;
    int edges[5][2] = {{0,1},{1,2},{2,3},{3,4},{4,0}};
    
    for (int i=0;i<E;i++){
        int u=edges[i][0], v=edges[i][1];
        adj[u][v]=adj[v][u]=1;
    }
    cout << (dfs(0,-1,V) ? "true" : "false");
}
