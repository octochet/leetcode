class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        if(n==m && n==1) {
            return grid[0][0];
        }
        vector<vector<int>> sums(m, vector<int>(n,0));
        sums[0][0] = grid[0][0];
        for(int i=1; i<m; i++) {
            sums[i][0] = grid[i][0] + sums[i-1][0];
        }

        for(int j=1; j<n; j++) {
            sums[0][j] = grid[0][j] + sums[0][j-1];
        }

        for(int i=1; i<m; i++) {
            for(int j=1; j<n; j++) {
                sums[i][j] = min(sums[i-1][j], sums[i][j-1]) + grid[i][j];
            }
        }
        return sums[m-1][n-1];
    }
};