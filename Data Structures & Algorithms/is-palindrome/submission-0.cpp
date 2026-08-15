class Solution {
public:
    bool isPalindrome(string s) {
        string t;

        
        for(int i=0;i<s.length();i++){
            if(s[i] == ' ') continue;
            if(!isalnum(s[i])) continue;
            t.push_back(s[i]);
        }

        for(int i = 0; i < t.length(); i++){
        t[i] = tolower(t[i]);
        }

        int i = 0;
        int j = t.length()-1;

        while(i<=j){
            if(t[i] == t[j]){
                i++;
                j--;
            }

            else return false;
        }
        return true;
    }
};
