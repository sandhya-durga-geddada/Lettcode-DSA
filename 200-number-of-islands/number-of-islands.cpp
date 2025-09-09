class Solution {
public:
    void traverse(vector<vector<char>>& grid, vector<vector<int>>&visited , int i,int j){
         if(i>=grid.size() || j>=grid[0].size() || i<0 || j<0 || visited[i][j]==1 || grid[i][j] == '0') return;
         visited[i][j] =1;

       
         traverse(grid,visited,i+1,j);
        
          traverse(grid,visited,i,j+1);
        
          traverse(grid,visited,i-1,j);
       
          traverse(grid,visited,i,j-1);
       
    
    }
    int numIslands(vector<vector<char>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<int>> visited(m,vector<int>(n));
       
        int ans = 0;
        for(int i = 0;i<m;i++){
            for(int j=0;j<n;j++){
                if(visited[i][j]==0 && grid[i][j]=='1'){
                    ans++;
                    traverse(grid,visited,i,j);
                }
            }
        }
        return ans;
    }
};