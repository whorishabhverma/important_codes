/*
class Solution {
  public:
     The Bellman-Ford algorithm is used to find the shortest path from a single source vertex to all other vertices in a weighted directed graph. It can handle negative weight edges and also detect negative weight cycles.

    
    vector<int> bellman_ford(int V, vector<vector<int>>& edges, int S) {
        vector<int> dist(V,1e8);
        dist[S]=0;
        for(int i=1;i<=V-1;i++){
            for(auto it:edges){
                int u=it[0],v=it[1],wt=it[2];
                if(dist[u]!=1e8 && dist[u]+wt<dist[v]){
                    dist[v] = dist[u]+wt;
                }
            }
        }
        
        //one more for negatives
        for(auto it:edges){
                int u=it[0],v=it[1],wt=it[2];
                if(dist[u]!=1e8 && dist[u]+wt<dist[v]){
                    return {-1};
                }
        }
        return dist;

        Negative Cycle Detection
        We run one more relaxation cycle to check for negative weight cycles.
        If after V-1 relaxations, an edge can still be relaxed, a negative weight cycle exists, and we return {-1}.

        When to Use Bellman-Ford?
        ✔ When the graph has negative weight edges
        ✔ When we need to detect negative weight cycles
        
            
    }
};
*/