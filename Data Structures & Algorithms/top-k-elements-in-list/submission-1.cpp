class Solution {
public: 
    static bool cmp(pair<int,int>&x,pair<int,int>&y){
        if(x.second>y.second)return true;
        return false;
    }
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<pair<int,int>>vp;
        for(int i=0,j=-1000;i<=2000;i++,j++)vp.push_back({j,0});
        for(int i=0;i<nums.size();i++){
            vp[nums[i]+1000].first=nums[i]+1000;
            vp[nums[i]+1000].second++;
        }
        sort(vp.begin(),vp.end(),cmp);
        vector<int>result;
        for(int i=0;i<k;i++)result.push_back(vp[i].first-1000);
        return result;
    }
};
