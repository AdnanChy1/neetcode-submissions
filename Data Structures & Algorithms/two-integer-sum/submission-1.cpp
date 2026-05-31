class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>v=nums;
        int idx1=-1,idx2=-1;
        sort(v.begin(),v.end());
        for(int i=0;i<v.size()-1;i++){
            int j=lower_bound(v.begin()+i,v.end(),target-v[i])-v.begin();
            if(j<v.size() && v[j]==target-v[i]){
                for(int k=0;k<nums.size();k++){
                    if(nums[k]==v[i] && idx1==-1)idx1=k;
                    else if(nums[k]==v[j] && idx2==-1)idx2=k;
                }
            }
        }
        return {min(idx1,idx2),max(idx1,idx2)};
    }
};
