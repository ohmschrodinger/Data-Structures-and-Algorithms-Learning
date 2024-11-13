#include <stdio.h>
#include <stdlib.h>

#define MAX 100

int adj[MAX][MAX];
int visited[MAX];
int queue[MAX];
int front = -1, rear = -1;

void addEdge(int u, int v) {
    adj[u][v] = 1;
    adj[v][u] = 1; 
}

void bfs(int start, int vertices) {
    for (int i = 0; i < vertices; i++) visited[i] = 0;
    front = rear = -1;
    queue[++rear] = start;
    visited[start] = 1;

    while (front != rear)
    {
        int node = queue[++front];
        printf("%d ", node);
        for (int i = 0; i < vertices; i++)
        {
            if (adj[node][i] && !visited[i])
            {
                queue[++rear] = i;
                visited[i] = 1;
            }
        }
    }
}

void dfs(int node, int vertices)
{
    printf("%d ", node);
    visited[node] = 1;

    for (int i = 0; i < vertices; i++)
    {
        if (adj[node][i] && !visited[i])
        {
            dfs(i, vertices);
        }
    }
}

int main() {
    int vertices = 6; 

    addEdge(0, 1);
    addEdge(0, 2);
    addEdge(1, 3);
    addEdge(1, 4);
    addEdge(2, 5);

    printf("BFS starting from node 0:\n");
    bfs(0, vertices);
    printf("\n");

    for (int i = 0; i < vertices; i++) visited[i] = 0;
    printf("DFS starting from node 0:\n");
    dfs(0, vertices);
    printf("\n");

    return 0;
}