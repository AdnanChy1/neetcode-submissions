class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& t) {
        stack<pair<int,int>>st;
        vector<int>v(t.size());
        for(int i=0;i<t.size();i++){
            while(!st.empty() && t[i]>st.top().first){
                v[st.top().second]=i-st.top().second;
                st.pop();
            }
            st.push({t[i],i});
        }
        while(st.empty()){
            v[st.top().second]=0;
            st.pop();
        }
        return v;
    }
};
