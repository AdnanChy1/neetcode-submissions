class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int top=0,bottom=matrix.size()-1;
        while(top<=bottom){
            int mid=(top+bottom)/2;
            if(matrix[mid][0]<target)top=mid+1;
            else bottom=mid-1;
        }
        if(top>=matrix.size() || matrix[top][0]>target)top--;
        if(top<0 || matrix[top][0]>target)return false;
        int left=0,right=matrix[0].size()-1;
        while(left<=right){
            int mid=(left+right)/2;
            if(matrix[top][mid]<target)left=mid+1;
            else right=mid-1;
        }
        if(left<matrix[0].size() && matrix[top][left]==target)return true;
        else return false;
    }
};