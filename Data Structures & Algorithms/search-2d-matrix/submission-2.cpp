class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int t) {
        int n = mat.size();
        int m = mat[0].size();
        int l = 0;
        int r = n*m-1;
        while(l<=r){
            int mid = l+(r-l)/2;
            int row = mid/m;
            int col = mid%m;
            if(mat[row][col]==t){
                return true;
            }
            if(mat[row][col]<t){
                l = mid+1;
            }else{
                r = mid-1;
            }
        }
        return false;
    }
};
