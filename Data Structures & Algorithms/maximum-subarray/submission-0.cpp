class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0,result=INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(sum<nums[i] && sum<0)sum=nums[i];
            else sum+=nums[i];
            result=max(sum,result);
        }
        return result;
    }
};