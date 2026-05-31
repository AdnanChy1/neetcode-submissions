class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int product=1;
        int z_count=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0)product*=nums[i];
            else z_count++;
        }
        vector<int>v;
        for(int i=0;i<nums.size();i++){
            if(z_count>1)v.push_back(0);
            else if(z_count==1 and nums[i]!=0)v.push_back(0);
            else if(nums[i]==0)v.push_back(product);
            else v.push_back(product/nums[i]);
        }
        return v;
    }
};
