/*
class Solution{
	void depthFirstSearch(vector<vector<int>> &adj, vector<int> &ans, vector<bool> &visited, int src) {
		visited[src] = true;
		ans.push_back(src);
		for (auto ele : adj[src]) {
			if (!visited[ele]) {
				depthFirstSearch(adj, ans, visited, ele);
			}
		}
	}
	vector<int> dfs(vector<vector<int>> &adj, int V) {
		vector<int> ans;
		vector<bool> visited(V, false);
        //disconnected component handling
		for (int i = 0; i < V; i++) {
			if (!visited[i]) {
				depthFirstSearch(adj, ans, visited, i);
			}
		}
		return ans;
	}
};
*/