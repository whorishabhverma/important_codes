// https://www.geeksforgeeks.org/problems/shortest-source-to-destination-path3544/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=practice_card
/*
class Solution {
public:
    vector<int> drow = {-1, 1, 0, 0}; 
    vector<int> dcol = {0, 0, -1, 1};
    bool isValid(int i, int j, int N, int M) {
        return (i >= 0 && i < N && j >= 0 && j < M);
    }

    int shortestDistance(int N, int M, vector<vector<int>>& A, int X, int Y) {
        if (A[0][0] == 0 || A[X][Y] == 0) return -1; // If start or destination is blocked

        vector<vector<bool>> vis(N, vector<bool>(M, false));
        queue<pair<int, int>> q;
        q.push({0, 0});
        vis[0][0] = true;
        int steps = 0;

        while (!q.empty()) {
            int size = q.size();
            while (size--) {
                int i = q.front().first;
                int j = q.front().second;
                q.pop();

                if (i == X && j == Y) return steps; // Reached destination

                for (int d = 0; d < 4; d++) {  // Iterate over 4 possible directions
                    int newRow = i + drow[d];
                    int newCol = j + dcol[d];

                    if (isValid(newRow, newCol, N, M) && A[newRow][newCol] == 1 && !vis[newRow][newCol]) {
                        vis[newRow][newCol] = true;
                        q.push({newRow, newCol});
                    }
                }
            }
            steps++;
        }
        return -1; // If no path found
    }
};
*/