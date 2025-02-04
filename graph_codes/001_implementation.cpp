#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
	void printAdjacentList(vector<vector<int>> &adj) {
		cout << "Adjacent List:" << endl;
		for (int i = 0; i < adj.size(); i++) {
			cout << i << " -> ";
			for (int j = 0; j < adj[i].size(); j++) {
				cout << adj[i][j] << " ";
			}
			cout << endl;
		}
	}
};
int main() {
	int V, E;
	cin >> V >> E;
	vector<vector<int>> adj(V);

	for (int i = 0; i < E; i++) {
		int u, v;
		cin >> u >> v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}

	Solution obj;
	obj.printAdjacentList(adj);
	return 0;
}
