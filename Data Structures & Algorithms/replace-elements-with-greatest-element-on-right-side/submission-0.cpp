class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        stack<int>st;
        int m=-1;
        st.push(m);
        for(int i=arr.size()-1;i>0;i--){
            m=max(m,arr[i]);
            st.push(m);
        }
        vector<int>v;
        while(!st.empty()){
            v.push_back(st.top());
            st.pop();
        }
        return v;
    }
};