class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> m(stones.begin(), stones.end());
        while(m.size()>1){
            int x = m.top();m.pop();
            int y = m.top();m.pop();
            if(x!=y){
                m.push(x-y);
            }
        }
        return m.empty() ? 0 : m.top();
    }
};
