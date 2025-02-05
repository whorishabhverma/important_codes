#include <bits/stdc++.h>
using namespace std;
//O(V + E) (Each node and edge is processed once).
//only in DIrected Acyclic Graph
// Function to perform Topological Sort using Kahn's Algorithm (BFS)
vector<int> topologicalSort(vector<vector<int>>& adj) {
    int N = adj.size();
    vector<int> inDegree(N, 0), result;

    // Calculate in-degrees of all nodes
    for (int i = 0; i < N; i++) {
        for (int &j : adj[i]) {
            inDegree[j]++;
        }
    }

    queue<int> q;
    // Push nodes with in-degree 0
    for (int i = 0; i < N; i++) {
        if (inDegree[i] == 0) q.push(i);
    }

    while (!q.empty()) {
        int node = q.front();
        q.pop();
        result.push_back(node);
        
        for (int &nbr : adj[node]) {
            inDegree[nbr]--;
            if (inDegree[nbr] == 0) {
                q.push(nbr);
            }
        }
    }

    return result;
}

// Driver Code
int main() {
    int V, E;
    cout << "Enter the number of vertices: ";
    cin >> V;
    cout << "Enter the number of edges: ";
    cin >> E;

    vector<vector<int>> adj(V);

    cout << "Enter the directed edges (u v) where u -> v:\n";
    for (int i = 0; i < E; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
    }

    vector<int> topoOrder = topologicalSort(adj);

    cout << "Topological Sort Order: ";
    for (int node : topoOrder) {
        cout << node << " ";
    }
    cout << endl;

    return 0;
}
