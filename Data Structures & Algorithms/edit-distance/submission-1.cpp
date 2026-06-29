class Solution {
public:
    int findMinCost(string& a, string &b, int i, int j, vector<vector<int>>& dp){
        if(i==a.length()){
            return b.length()-j;
        }
        if(j==b.length()){
            return a.length() - i;
        }
        if(a[i]==b[j]){
            return findMinCost(a,b,i+1,j+1,dp);
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        int re = findMinCost(a,b,i+1,j+1,dp);
        int del = findMinCost(a,b,i,j+1,dp);
        int ins = findMinCost(a,b,i+1,j,dp);
        
        return dp[i][j] = 1+min({re,del,ins});
    }
    int minDistance(string word1, string word2) {
        vector<vector<int>> dp(word1.length(),vector<int>(word2.length(),-1));
        return findMinCost(word1,word2, 0,0,dp);
    }
};
