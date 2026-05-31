class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& t) {
        stack<int>st;
        vector<int>v(t.size());
        for(int i=0;i<t.size();i++){
            while(!st.empty() && t[i]>t[st.top()]){
                v[st.top()]=i-st.top();
                st.pop();
            }
            st.push(i);
        }
        while(st.empty()){
            v[st.top()]=0;
            st.pop();
        }
        return v;
    }
};
