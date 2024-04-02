#include <bits/stdc++.h>
using namespace std;

const int MAX_NODES = 10000;
int node, edge;
int a[MAX_NODES][MAX_NODES];
int clour[MAX_NODES];
int parent[MAX_NODES];
int d[MAX_NODES];

void bfs(int startingnode) {
    parent[startingnode] = 0;
    d[startingnode] = 0;

    queue<int> q;
    q.push(startingnode);

    while (!q.empty()) {
        int x = q.front();
        q.pop();
        clour[x] = 1;
        cout << x << " ";

        for (int i = 0; i < node; i++) {
            if (a[x][i] == 1) {
                if (clour[i] == 0) {
                    // x ar never i
                    // x number node hocche i number node ar parent
                    parent[i] = x;
                    d[i] = d[x] + 1; 
                    q.push(i);
                }
            }
        }
        clour[x] = 2;
    }
}

int main() {
    int x, y;
    cin >> node >> edge;

    // Initialize adjacency matrix
    for (int i = 0; i < MAX_NODES; i++) {
        for (int j = 0; j < MAX_NODES; j++) {
            a[i][j] = 0;
        }
    }

    for (int i = 0; i < edge; i++) {
        cin >> x >> y;
        a[x][y] = 1;
        a[y][x] = 1;
    }

    bfs(0);
    return 0;
}
