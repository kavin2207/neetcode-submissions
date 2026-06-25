class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> a(26,0);
        for(auto i:s){
            a[i-'a']++;
        }
        for(auto i:t){
            a[i-'a']--;
        }
        for(int i=0;i<26;i++){
            if(a[i]!=0){
                return false;
            }
        }
        return true;
    }
};
