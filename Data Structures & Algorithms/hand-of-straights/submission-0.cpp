class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        if(hand.size()%groupSize!=0){
            return false;
        }

        unordered_map<int,int> m;
        for(auto i:hand){
            m[i]++;
        }
        sort(hand.begin(),hand.end());

        for(auto x:hand){
            if(m[x]==0){
                continue;
            }
            for(int j=0;j<groupSize;j++){
                if(m[x]==0){
                    return 0;
                }
                m[x]--;
                x++;
            }
        }

        return true;

    }
};
