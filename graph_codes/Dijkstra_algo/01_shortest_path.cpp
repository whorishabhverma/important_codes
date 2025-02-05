/*
Dijkstra’s algorithm is used in graph-based problems where we need to find the shortest path from a single source to all other vertices. It is applied in the following scenarios:

1. Finding the Shortest Path in a Graph
Used when: You need the shortest distance from a starting node to all other nodes in a weighted graph.
Example: Google Maps finds the shortest route from one location to another.
2. Graph Characteristics Suitable for Dijkstra
The graph should be weighted.
Non-negative weights (Dijkstra does NOT work correctly for graphs with negative weights).
It works on both directed and undirected graphs.


When NOT to Use Dijkstra?
If the graph has negative weights → Use Bellman-Ford Algorithm instead.
If you need shortest paths between all pairs → Use Floyd-Warshall Algorithm.
*/

//using min heap 

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    typedef pair<int, int> pii;
    vector<int> dijkstra(vector<vector<pair<int, int>>> &adj, int src) {
        int v = adj.size();
        vector<int> dist(v, 1e9);
        priority_queue<pii, vector<pii>, greater<pii>> minHeap;
        dist[src] = 0;
        minHeap.push({0, src});
        while (!minHeap.empty()) {
            int dis = minHeap.top().first;
            int node = minHeap.top().second;
            minHeap.pop();
            for (auto it : adj[node]) {
                int edgeWt = it.second;
                int adjNode = it.first;
                if (dist[adjNode] > dis + edgeWt) {
                    dist[adjNode] = dis + edgeWt;
                    minHeap.push({dist[adjNode], adjNode});
                }
            }
        }
        return dist;
    }
};

int main() {
    int V, E;  // Number of vertices and edges
    cout << "Enter number of vertices and edges: ";
    cin >> V >> E;

    vector<vector<pair<int, int>>> adj(V);  // Adjacency list

    cout << "Enter edges (format: u v weight):" << endl;
    for (int i = 0; i < E; i++) {
        int u, v, wt;
        cin >> u >> v >> wt;
        adj[u].push_back({v, wt});
        adj[v].push_back({u, wt}); // Remove this line for directed graph
    }

    int src;
    cout << "Enter source vertex: ";
    cin >> src;

    Solution obj;
    vector<int> shortestDistances = obj.dijkstra(adj, src);

    cout << "Shortest distances from source " << src << " are:\n";
    for (int i = 0; i < V; i++) {
        if (shortestDistances[i] == 1e9)
            cout << "Node " << i << ": INF\n";
        else
            cout << "Node " << i << ": " << shortestDistances[i] << endl;
    }

    return 0;
}
