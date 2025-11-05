/* Write a Program in c to Count Number of Nodes of a graph */

#include <stdio.h>

int main() {
    int n, i, j;
    int graph[10][10]; // adjacency matrix (max 10 nodes)

    // Input number of nodes
    printf("Enter number of nodes in the graph: ");
    scanf("%d", &n);

    // Input adjacency matrix
    printf("Enter the adjacency matrix of the graph (%d x %d):\n", n, n);
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &graph[i][j]);
        }
    }

    // Display adjacency matrix
    printf("\nAdjacency Matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", graph[i][j]);
        }
        printf("\n");
    }

    // Display number of nodes
    printf("\nTotal number of nodes in the graph = %d\n", n);

    return 0;
}
