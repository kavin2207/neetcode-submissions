class Solution {
public:
    int check(vector<vector<int>>& grid, int i, int j, vector<vector<bool>>& visited){
        visited[i][j]=true;
        int dx[4] = {0,0,1,-1};
        int dy[4] = {1,-1,0,0};
        int count = 1;
        for(int dir=0;dir<4;dir++){
            int x = i+dx[dir];
            int y = j+dy[dir];
            if(x>=0 && y>=0 && x<grid.size() && y<grid[0].size() && !visited[x][y] && grid[x][y]==1){
                count += check(grid,x,y,visited);
            }
        }
        return count;
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        vector<vector<bool>> visited(grid.size(),vector<bool>(grid[0].size(),false));
        int ans=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]==1 && !visited[i][j]){
                    ans=max(ans,check(grid,i,j,visited));
                }
            }
        }
        return ans;
    }
};
