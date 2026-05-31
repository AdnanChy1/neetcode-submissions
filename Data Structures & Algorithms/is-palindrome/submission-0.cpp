class Solution {
public:
    bool isPalindrome(string s) {
        string a,b;
        for(auto it:s){
            if(isdigit(it))a.push_back(it);
            else if(isalpha(it))a.push_back(tolower(it));
        }
        b=a;
        reverse(a.begin(),a.end());
        return a==b;
    }
};
