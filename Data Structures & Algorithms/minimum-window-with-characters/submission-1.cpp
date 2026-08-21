class Solution {
public:
    string minWindow(string s, string t) {
        if(t.length() > s.length()) return "";

        int n = s.length();
        unordered_map<char, int> mp;
        for(int i=0;i<t.length();i++){
            mp[t[i]]++;
        }

        int reqCount = t.length();
        int i = 0;
        int j = 0;
        int minWindowSize = INT_MAX;
        int start_i = 0;

        while(j<n){
            char ch = s[j];
            if(mp[ch] > 0) reqCount--;
            mp[ch]--;

            while(reqCount == 0){
                int currWindowSize = j-i+1;

                if(currWindowSize < minWindowSize){
                    minWindowSize = currWindowSize;
                    start_i = i;
                }
                mp[s[i]]++;
                if(mp[s[i]] > 0) reqCount++;
                i++;
            }
            j++;
        }
        if(minWindowSize == INT_MAX) return "";
        return s.substr(start_i, minWindowSize);
    }
};
