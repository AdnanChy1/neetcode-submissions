class Solution {
public:
    int minEatingSpeed(vector<int>& p, int h) {
        int r=*max_element(p.begin(),p.end());
        int l=1;
        while(l<=r){
            int mid=(l+r)/2;
            long long k=0;
            for(int i=0;i<p.size();i++){
                k+=(p[i]+mid-1)/mid;
            }
            if(k>h)l=mid+1;
            else r=mid-1;
        }
            return l;
    }
};