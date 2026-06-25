class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> s;
        for(int i=0;i<nums.size();i++){
            int k = target - nums[i];
            if(s.find(k)!=s.end()){
                return {s[k], i};
            }
            s[nums[i]]=i;
        }
        return {};
    }
};
