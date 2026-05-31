class Solution {
public:
    vector<string>v;
    string encode(vector<string>& strs) {
        string s;
        for(auto it:strs){
            s.append(to_string(it.size()));
            s.push_back('#');
            s.append(it);
        }
        cout<<s<<endl;
        return s;
    }

    vector<string> decode(string s) {
        vector<string>result;
        int i=0;
        while(i<s.size()){
            string t;
            string temp;
            while(s[i]!='#'){
                temp.push_back(s[i]);
                i++;
            }
            int val=stoi(temp);
            int j;
            for(j=i+1;j<=i+val;j++)t.push_back(s[j]);
            i=j;
            result.push_back(t);
        }
        return result;
    }
};
