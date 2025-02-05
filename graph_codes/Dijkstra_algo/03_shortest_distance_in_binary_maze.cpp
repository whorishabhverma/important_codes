/*

https://www.geeksforgeeks.org/problems/shortest-path-in-a-binary-maze-1655453161/1

int shortestPath(vector<vector<int>> &grid, pair<int, int> source,
                     pair<int, int> destination) {
        if(source.first == destination.first && source.second == destination.second){
            return 0;
        }
        int n=grid.size(),m=grid[0].size();
        queue<pair<int,pair<int,int>>> q;
        vector<vector<int>> dist(n,vector<int>(m,1e9));
        dist[source.first][source.second] = 0;
        q.push({0,{source.first,source.second}});
        vector<int> delr = {-1, 0,+1,0}; 
        vector<int> delc  = { 0,+1,0,-1};
        while(!q.empty()){
            auto it = q.front(); q.pop();
            int r   = it.second.first; 
            int c   = it.second.second; 
            int dis = it.first;
            
            for(int i=0;i<4;i++){
                int newr = r + delr[i]; 
                int newc = c + delc[i];
                
                if(newr>=0 && newr<n && newc>=0 && newc<m && grid[newr][newc]==1 && dis+1 < dist[newr][newc]){
                    dist[newr][newc] = dis+1;
                    if(newr == destination.first && newc == destination.second) return dis+1;
                    q.push({dis+1,{newr,newc}});
                }
            }
        }
        return -1;
    }

*/    