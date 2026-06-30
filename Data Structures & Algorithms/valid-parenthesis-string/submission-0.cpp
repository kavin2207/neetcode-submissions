class Solution {
public:
    bool checkValidString(string s) {
        int high = 0, low = 0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                high++;
                low++;
            }
            if(s[i]==')'){
                high--;
                low--;
            }
            if(s[i]=='*'){
                low--;
                high++;
            }
            if(high < 0)
                return false;

            low = max(low, 0);
        }
        return low==0;
    }
};
