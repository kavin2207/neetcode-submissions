class Solution {
public:
    int findPath(vector<vector<int>> & m, int i, int j, vector<vector<int>>& dp){
        //visited[i][j] = true;
        int dx[4] = {0,0,1,-1};
        int dy[4] = {1,-1,0,0};
        int count = 1;
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        for(int k=0;k<4;k++){
            int x = i+dx[k];
            int y = j+dy[k];
            if(x>=0 && y>=0 && x<m.size() && y<m[0].size() &&m[i][j]<m[x][y]){
                count=max(count,findPath(m,x,y,dp)+1);
                //visited[x][y] = false;
            }
        }
        //visited[i][j]=false;
        return dp[i][j] = count;
    }
    int longestIncreasingPath(vector<vector<int>>& mat) {

        int ma = 0;
        int n = mat.size();
        int m = mat[0].size();
        vector<vector<int>> dp(n,vector<int>(m,-1));

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                ma = max(ma,findPath(mat,i,j,dp));
            }
        }
        return ma;
        
    }
};
