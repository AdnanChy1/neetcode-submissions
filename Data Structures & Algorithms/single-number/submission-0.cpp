class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n=0;
        for(int i=0;i<nums.size();i++)n=n xor nums[i];
        return n;
    }
};