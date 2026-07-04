class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> ans;
        priority_queue<pair<int,int>> st;
        for(int i=0;i<k;i++){
            st.push({nums[i], i});
        }
        ans.push_back(st.top().first);
        int i=0,j=k;
        while(j<nums.size()){
            while(!st.empty() && i>=st.top().second){
                st.pop();
            }
            
            st.push({nums[j],j});
            ans.push_back(st.top().first);
            i++;
            j++;
        }
        return ans;
    }
};
