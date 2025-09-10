#include <iostream>
#include <queue>
using namespace std;
int shortestPath(int V, int edges[][2], int E, int start, int end) {
    int adj[100][100] = {0};  
    for (int i = 0; i < E; i++) {
        int u = edges[i][0], v = edges[i][1];
        adj[u][v] = 1;
        adj[v][u] = 1;  
    }
    bool visited[100] = {false};
    int dist[100];
    for (int i = 0; i < V; i++) dist[i] = -1;
    queue<int> q;
    q.push(start);
    visited[start] = true;
    dist[start] = 0;
    while (!q.empty()) {
        int node = q.front(); q.pop();
        if (node == end) return dist[node];
        for (int i = 0; i < V; i++) {
            if (adj[node][i] && !visited[i]) {
                visited[i] = true;
                dist[i] = dist[node] + 1;
                q.push(i);
            }
        }
    }
    return -1;
}
int main() {
    int V = 5;
    int E = 5;
    int edges[5][2] = {{0,1},{0,2},{1,3},{2,3},{3,4}};
    int start = 0, end = 4;
    cout << shortestPath(V, edges, E, start, end);
    return 0;
}
