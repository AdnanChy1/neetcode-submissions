class Solution {
public:
    int findCircleNum(vector<vector<int>>& v) {
        vector<int>vis(v.size(),0);
        queue<int>q;
        int connected_components=0;
        for(int i=0;i<v.size();i++){
            if(vis[i])continue;
            q.push(i);
            vis[i]=1;
            while(!q.empty()){
                int node=q.front();
                q.pop();
                for(int j=0;j<v.size();j++){
                    if(v[node][j] && (!vis[j])){
                        vis[j]=1;
                        q.push(j);
                    }
                }
            }
            connected_components++;
        }
        return connected_components;
    }
};