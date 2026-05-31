class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int val=(nums.size()*(nums.size()+1))/2;
        for(int i=0;i<nums.size();i++){
            val-=nums[i];
        }
        return val;
    }
};