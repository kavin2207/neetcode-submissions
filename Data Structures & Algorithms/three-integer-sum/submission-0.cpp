class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> s;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                for(int k=j+1;k<nums.size();k++){
                    if(nums[i]+nums[j]+nums[k]==0){
                        vector<int> temp = {nums[i], nums[j], nums[k]};
                        sort(temp.begin(), temp.end());

                        s.insert({temp[0], temp[1], temp[2]});
                    }
                }
            }
        }
        vector<vector<int>> ans;
        for(auto i:s){
            ans.push_back({i});
        }
        return ans;
    }
};
