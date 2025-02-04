/*
class Solution{
void breadthFirstSearch(vector<vector<int>> &adj, vector<int> &ans, int V, int src, vector<bool> &visited) {
		queue<int> q;
		q.push(src);
		visited[src] = true;

		while (!q.empty()) {
			int node = q.front();
			q.pop();
			ans.push_back(node);
			for (auto nbr : adj[node]) {
				if (!visited[nbr]) {
					q.push(nbr);
					visited[nbr] = true;
				}
			}
		}
	}

	vector<int> bfs(vector<vector<int>> &adj, int V) {
		vector<int> ans;
		vector<bool> visited(V, false);
		//disconnected components handling
		for (int i = 0; i < V; i++) {
			if (!visited[i]) {
				breadthFirstSearch(adj, ans, V, i, visited);
			}
		}
		return ans;
	}
};
*/