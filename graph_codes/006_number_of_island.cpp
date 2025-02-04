//https://www.geeksforgeeks.org/problems/find-the-number-of-islands/1
class Island{
vector<int> drow = {-1,-1,0,1,1,1,0,-1};
vector<int> dcol = {0,1,1,1,0,-1,-1,-1};

int n, m;

void bfs(int row, int col, vector<vector<char>>& grid, vector<vector<int>>& visited) {
    visited[row][col] = 1;
    queue<pair<int, int>> q;
    q.push({row, col});

    while (!q.empty()) {
        int r = q.front().first;
        int c = q.front().second;
        q.pop();

        for (int i = 0; i < 8; i++) {
            int newRow = r + drow[i];
            int newCol = c + dcol[i];

            if (newRow >= 0 && newRow < n && newCol >= 0 && newCol < m &&
                !visited[newRow][newCol] && grid[newRow][newCol] == '1') {
                
                visited[newRow][newCol] = 1;
                q.push({newRow, newCol});
            }
        }
    }
}

int numIslands(vector<vector<char>>& grid) {
    n = grid.size();
    m = grid[0].size();
    vector<vector<int>> visited(n, vector<int>(m, 0));
    int cnt = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (!visited[i][j] && grid[i][j] == '1') {
                cnt++;
                bfs(i, j, grid, visited);
            }
        }
    }
    return cnt;
}
};
