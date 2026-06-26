class Solution {
public:
    static bool helper(const pair<int,int>& a, const pair<int,int>& b){
        return a.second<b.second;
    }
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        vector<pair<int,int>> v;
        for(auto i:m){
            v.push_back({i.first, i.second});
        }
        sort(v.begin(),v.end(),helper);
        vector<int> ans;
        int i=v.size()-1;
        while(k--){
            ans.push_back(v[i].first);
            i--;
        }
        return ans;
    }
};
