class Solution {
public:

    void getPerimeter(vector<vector<int>>& grid,vector<vector<int>>& visited,int i ,int j,int &perimeter){
        if(i<0 || j<0 || i>=grid.size() || j>=grid[0].size() || grid[i][j]==0 || visited[i][j] == 1) return; 
        visited[i][j] = 1;

        if(i-1 < 0 || grid[i-1][j]==0){
            perimeter+=1;
        }if( i+1 >= grid.size() || grid[i+1][j]==0){
            perimeter+=1;
        }if(j-1 < 0 || grid[i][j-1]==0){
            perimeter+=1;
        }if( j+1 >= grid[i].size()||grid[i][j+1]==0){
            perimeter+=1;
        }
        getPerimeter(grid,visited,i-1,j,perimeter);
        getPerimeter(grid,visited,i+1,j,perimeter);
        getPerimeter(grid,visited,i,j-1,perimeter);
        getPerimeter(grid,visited,i,j+1,perimeter);  

    }

    int islandPerimeter(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> visited(n,vector<int>(m,0));
        int perimeter = 0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(visited[i][j] == 0 && grid[i][j]==1){
                    getPerimeter(grid,visited,i,j,perimeter);
                }
            }
        }
        return perimeter;
    }
};