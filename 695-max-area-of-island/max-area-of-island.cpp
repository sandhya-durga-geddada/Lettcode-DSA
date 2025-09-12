class Solution {
public:
    int  cal(vector<vector<int>>& grid , int i,int j ,vector<vector<int>>&visited){
        if(i>=grid.size() || i<0 || j<0 || j>=grid[i].size() || visited[i][j]==1 || grid[i][j]==0) return 0;
        visited[i][j] = 1;
        int a = 1;
        a += cal(grid,i+1,j,visited);
        a += cal(grid,i-1,j,visited);
        a += cal(grid,i,j+1,visited);
        a += cal(grid,i,j-1,visited);

        return a;

    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> visited(n,vector<int>(m,0));
        int ans = 0;
        for(int i = 0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j] == 1 && visited[i][j] == 0){
                    ans = max(ans,cal(grid,i,j,visited));
                }
            }
        }
        return ans;
    }
};