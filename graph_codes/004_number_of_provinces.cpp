//Number of provinces : https://www.geeksforgeeks.org/problems/number-of-provinces/1
	/*
    class Solution{
	void dfsNP(vector<vector<int>> &adj, int V,vector<bool> &visited,vector<int>&ans,int src) {
		visited[src]=true;
		ans.push_back(src);
		for(auto ele:adj[src]) {
			if(!visited[ele]) {
				dfsNP(adj,V,visited,ans,ele);
			}
		}
	}

	int numProvinces(vector<vector<int>> adjM, int V) {
		vector<vector<int>> adj(V);

		//converting adjacency matric into list
		for(int i=0; i<adjM.size(); i++) {
			for(int j=0; j<adjM[i].size(); j++) {
				if(adjM[i][j]==1 && i!=j) {
					adj[i].push_back(j);
					adj[j].push_back(i);
				}
			}
		}

		//solution
		vector<bool> visited(V,false);
		vector<int> ans;
		int cnt=0;
		for(int i=0; i<V; i++) {
			if(!visited[i]) {
				cnt++;
				dfsNP(adj,V,visited,ans,i);
			}
		}
		return cnt;
	}
    };
*/