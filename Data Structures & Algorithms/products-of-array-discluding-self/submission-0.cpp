class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<long long> a,b;
        a.push_back(nums[0]);
        for(int i=1;i<nums.size();i++){
            a.push_back(a[i-1]*nums[i]);
        }
        b.push_back(nums[nums.size()-1]);
        int j=0;
        for(int i=nums.size()-2;i>=0;i--){
            b.push_back(b[j]*nums[i]);
            j++;
        }
        reverse(b.begin(),b.end());
        vector<int> ans;
        ans.push_back(b[1]);
        for(int i=1;i<a.size()-1;i++){
            ans.push_back(a[i-1]*b[i+1]);
        }
        ans.push_back(a[a.size()-2]);
        return ans;
    }
};
