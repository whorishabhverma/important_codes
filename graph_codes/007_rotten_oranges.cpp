/*
class RottenOranges {
public:
    vector<int> delRow = {-1, 0, 1, 0};
    vector<int> delCol = {0, 1, 0, -1};
    int orangesRotting(vector<vector<int>>& grid) {
        int n = grid.size(), m = grid[0].size(), freshOrange = 0, time = 0; 
        queue<pair<int, int>> q;
        
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(grid[i][j] == 2) {
                    q.push({i, j});
                }
                else if(grid[i][j] == 1) {
                    freshOrange++;
                }
            }
        }
        
        while(!q.empty() && freshOrange > 0) {
            int size = q.size();
            while(size--){
                auto [row,col] = q.front();  q.pop();
                for(int j = 0; j < 4; j++) {
                    int nRow = row + delRow[j];  
                    int nCol = col + delCol[j];
                    if(nRow >= 0 && nRow < n && nCol >= 0 && nCol < m && grid[nRow][nCol] == 1) {
                        freshOrange--;
                        grid[nRow][nCol] = 2;
                        q.push({nRow, nCol});
                    }
                }
            }
            time++;
        }
        return freshOrange == 0 ? time : -1; 
    }
};

*/