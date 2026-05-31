class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty())return 0;
        unordered_set<int>s;
        int count=1;
        int result=1;
        for(int i=0;i<nums.size();i++){
            s.insert(nums[i]);
        }
        for(int i=0;i<nums.size();i++){
            if(s.find(nums[i]-1)==s.end()){
                int val=nums[i]+1;
                while(s.find(val)!=s.end()){
                    val++;
                    count++;
                }
                result=max(count,result);
                count=1;
            }
        }
        return result;
    }
};
