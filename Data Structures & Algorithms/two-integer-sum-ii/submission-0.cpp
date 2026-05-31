class Solution {
public:
    vector<int> twoSum(vector<int>& v, int target) {
        int i=0,j=v.size()-1;
        int sum=v[i]+v[j];
        while(i<j){
           if(sum<target){
            sum-=v[i];
            i++;
            sum+=v[i];
        }
           else if(sum>target){
            sum-=v[j];
            j--;
            sum+=v[j];
        }
           else break;
        }
        return {i+1,j+1};
    }
};
