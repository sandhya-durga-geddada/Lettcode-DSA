class Solution {
public:
    void fill(vector<vector<int>>& image, int i, int j, int color,vector<vector<int>>&visited,int p)  {
        if( i>=image.size() || j>=image[0].size() || i<0 || j<0 || visited[i][j]==1|| image[i][j]!=p) return;
        if(image[i][j]==p) image[i][j] = color;
        visited[i][j] = 1;
        fill(image,i+1,j,color,visited,p);
        fill(image,i-1,j,color,visited,p);
        fill(image,i,j+1,color,visited,p);
        fill(image,i,j-1,color,visited,p);

       
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int n = image.size();
        int m = image[0].size();
        vector<vector<int>> visited(n,vector<int>(m,0));
        fill(image,sr,sc,color,visited,image[sr][sc]);
        return image;
    }
};