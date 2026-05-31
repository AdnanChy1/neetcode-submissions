class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>v;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-2;i++){
            int j=i+1,k=nums.size()-1;
            int val=nums[i]+nums[j]+nums[k];
            while(j<k){
                if(val==0){
                    v.push_back({nums[i],nums[j],nums[k]});
                    val-=nums[j]+nums[k];
                    j++;k--;
                    val+=nums[j]+nums[k];
                }
                else if(val>0){
                    val-=nums[k];
                    k--;
                    val+=nums[k];
                }
                else {
                    val-=nums[j];
                    j++;
                    val+=nums[j];
                }
            }
        }
        sort(v.begin(),v.end());
        v.erase(unique(v.begin(),v.end()),v.end());
        return v;
    }
};
