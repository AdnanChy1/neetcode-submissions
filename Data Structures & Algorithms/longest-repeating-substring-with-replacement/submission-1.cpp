class Solution {
public:
    int characterReplacement(string s, int k) {
        int count=0;
        vector<char>v(26,0);
        int i=0,j=0;
        v[s[j]-'A']++;
        while(j<s.size()){
            int m=*max_element(v.begin(),v.end());
            if(j-i+1-m<=k){
                count=max(count,j-i+1);
                j++;
                v[s[j]-'A']++;
            }
            else{
                v[s[i]-'A']--;
                i++;
            }
        }
        return count;
    }
};
