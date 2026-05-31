class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>v;
        for(int i=0;i<=n;i++){
           int count=0;
           for(int j=0;j<log2(i)+1;j++){
            if(i & (1<<j))count++;
           }
           v.push_back(count);
        }
        return v;
    }
};