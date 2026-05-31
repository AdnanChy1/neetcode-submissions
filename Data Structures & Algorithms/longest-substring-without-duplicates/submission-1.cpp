class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char>ss;
        int i=0,j=0,count=0;
        while(j<s.size()){
            if(ss.find(s[j])==ss.end()){
                ss.insert(s[j]);
            }
            else{
                count=max(count,j-i);
                while(i<j && s[i]!=s[j]){
                    ss.erase(s[i]);
                    i++;
                }
                i++;
            }
            j++;
        }
        return max(count,j-i);
    }
};
