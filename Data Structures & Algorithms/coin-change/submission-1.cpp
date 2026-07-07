class Solution {
public:
    int coinChange(vector<int>& coins, int a) {
        vector<int> dp(a+1,INT_MAX);
        dp[0]=0;
        for(int i=1;i<=a;i++){
            for(auto c:coins){
                if(i-c>=0 && dp[i-c]!=INT_MAX){
                    dp[i] = min(dp[i],dp[i-c]+1);
                }
            }
        }
        if(dp[a]==INT_MAX){
            return -1;
        }
        return dp[a];
    }
};
