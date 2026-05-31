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
            string temp;
            while(s[i]!='#'){
                temp.push_back(s[i]);
                i++;
            }
            string t=s.substr(i+1,stoi(temp));
            i+=stoi(temp)+1;
            result.push_back(t);
        }
        return result;
    }
};
