class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
       int val=0;
       for(int i=0;i<32;i++){
            if(n & (1<<i)){
                val+=(UINT_MAX & (1<<(31-i)));
            }
       }
       return val;
    }
};
