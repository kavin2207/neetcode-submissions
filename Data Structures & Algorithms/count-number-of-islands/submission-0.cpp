class Solution {
public:
    void check(vector<vector<char>>& grid, int i, int j, vector<vector<bool>>& visited){
        visited[i][j]=true;
        int dx[4] = {0,0,1,-1};
        int dy[4] = {1,-1,0,0};
        for(int dir=0;dir<4;dir++){
            int x = i+dx[dir];
            int y = j+dy[dir];
            if(x>=0 && y>=0 && x<grid.size() && y<grid[0].size() && !visited[x][y] && grid[x][y]=='1'){
                check(grid,x,y,visited);
            }
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        vector<vector<bool>> visited(grid.size(), vector<bool>(grid[0].size(),false));
        int count = 0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]=='1' && !visited[i][j]){
                    check(grid,i,j,visited);
                    count++;
                }
            }
        }
        return count++;
    }
};
