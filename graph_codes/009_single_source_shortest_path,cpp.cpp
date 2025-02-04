// User function Template for C++
// https://www.geeksforgeeks.org/problems/shortest-path-in-undirected-graph-having-unit-distance/1
/*
class Solution {
  public:
    vector<int> shortestPath(vector<vector<int>>& edges, int N,int M, int src){
        vector<int> ans(N,-1);
        unordered_map<int,vector<int>> adj;
        queue<int> q; q.push(src); ans[src]=0;
        for(auto ele:edges){
            int u = ele[0]; int v=ele[1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        while(!q.empty()){
            int temp=q.front();
            q.pop();
            for(auto i:adj[temp]){
                if(ans[i]==-1){
                    ans[i]=ans[temp]+1;
                    q.push(i);
                }
            }
        }
        
        
        return ans;
    }
};
*/