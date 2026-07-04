class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(char c:s){
            if(c=='(' || c=='{' || c=='['){
                st.push(c);
            }
            else if(!st.empty()){
                char k = st.top();
                if(k=='(' && c!=')'){
                    return false;
                }
                else if(k=='[' && c!=']'){
                    return false;
                }
                else if(k=='{' && c!='}'){
                    return false;
                }
                st.pop();
            }else{
                return false;
            }
        }
        return st.size()==0;
    }
};
