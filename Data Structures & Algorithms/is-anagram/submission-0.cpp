class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int>v1(26,0);
        vector<int>v2(26,0);
        for(auto it:s)v1[it-'a']++;
        for(auto it:t)v2[it-'a']++;
        for(int i=0;i<26;i++){
            if(v1[i]!=v2[i])return false;
        }
        return true;
    }
};
