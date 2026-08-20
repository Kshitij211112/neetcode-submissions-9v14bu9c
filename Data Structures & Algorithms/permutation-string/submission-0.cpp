class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n = s1.length();
        int left = 0;
        if(n>s2.length()) return false;

        unordered_map<char, int> mp1;
        unordered_map<char, int> mp2;

        for(char ch : s1){
            mp1[ch]++;
        }

        for(int right=0;right<s2.length();right++){
            mp2[s2[right]]++;

            if(right-left+1 > n){
                mp2[s2[left]]--;

                if(mp2[s2[left]] == 0) {
                    mp2.erase(s2[left]);
                }
                
                left++;
            }

            if(mp1 == mp2) return true;
        }

        return false;
    }
};
