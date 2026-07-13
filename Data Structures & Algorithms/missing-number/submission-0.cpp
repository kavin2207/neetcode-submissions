class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
        int x = nums.size();
        x=x*(x+1);
        x=x/2;
        return x-sum;

    }
};
