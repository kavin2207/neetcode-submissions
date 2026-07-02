class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> m;
        for(auto i: stones){
            m.push(i);
        }
        while(m.size()>1){
            int x = m.top();m.pop();
            int y = m.top();m.pop();
            if(x==y){
                continue;
            }
            m.push(abs(x-y));
        }
        if(m.size()==0){
            return 0;
        }
        return m.top();
    }
};
