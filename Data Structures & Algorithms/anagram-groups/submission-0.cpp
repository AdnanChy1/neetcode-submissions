class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>mp;
        for(auto s:strs){
            string a=s;
            sort(s.begin(),s.end());
            mp[s].push_back(a);
        }
        vector<vector<string>>result(mp.size());
        int i=0;
        for(auto it:mp){
            for(auto s:it.second)result[i].push_back(s);
            i++;
        }
        return result;
    }
};
