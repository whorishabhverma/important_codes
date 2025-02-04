//cycle or not in undirected graph : If we visit an already visited node that isn't the parent, then there is a cycle.  
    // https://www.geeksforgeeks.org/problems/detect-cycle-in-an-undirected-graph/1
    /*
    bool isCycleBFS(int V, vector<int> adj[]) {
    vector<bool> visited(V, false);
    
    for (int i = 0; i < V; i++) {
        if (!visited[i]) {
            queue<pair<int, int>> q; // {node, parent}
            q.push({i, -1});
            visited[i] = true;

            while (!q.empty()) {
                int node = q.front().first;
                int parent = q.front().second;
                q.pop();

                for (auto neighbor : adj[node]) {
                    if (!visited[neighbor]) {
                        visited[neighbor] = true;
                        q.push({neighbor, node});
                    }
                    else if (neighbor != parent) {
                        return true; // Cycle found
                    }
                }
            }
        }
    }
    return false;
    }
};
*/

