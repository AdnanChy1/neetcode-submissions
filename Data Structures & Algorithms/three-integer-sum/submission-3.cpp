class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>v;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-2;i++){
            if(i>0 and nums[i]==nums[i-1])continue;
            int j=i+1,k=nums.size()-1;
            int val=nums[i]+nums[j]+nums[k];
            while(j<k){
                if(val==0){             
                    v.push_back({nums[i],nums[j],nums[k]});
                    while(j<k and nums[j]==nums[j+1])j++;
                    while(j<k and nums[k]==nums[k-1])k--;
                    val-=nums[j]+nums[k];
                    j++;k--;
                    if(j<k)val+=nums[j]+nums[k];
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
        return v;
    }
};