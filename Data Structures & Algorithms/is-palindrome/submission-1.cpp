class Solution {
public:
    char toLower(char c){
        if(c >= 'A' && c <= 'Z'){
            return c + 32;
        }
        return c;
    }
    bool isPalindrome(string s) {
        stringstream ss(s);
        vector<string> words;
        string word;

        while (ss >> word) {
            words.push_back(word);
        }

        string temp="";
        for(auto i:words){
            temp+=i;
        }
        int i=0;
        int j=temp.length()-1;
        while(i<=j){
            if((temp[i] < 'a' || temp[i] > 'z') && (temp[i] < 'A' || temp[i] > 'Z') &&(temp[i] < '0' || temp[i] > '9')){
                i++;
                continue;
            }
            if((temp[j] < 'a' || temp[j] > 'z') && (temp[j] < 'A' || temp[j] > 'Z')&&(temp[j] < '0' || temp[j] > '9')){
                j--;
                continue;
            }
            if(toLower(temp[i])!=toLower(temp[j])){
                return false;
            }
            i++;
            j--;
        }
        return true;

    }
};
