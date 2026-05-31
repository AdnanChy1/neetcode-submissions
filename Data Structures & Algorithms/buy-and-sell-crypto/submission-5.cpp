class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size()==1)return 0;
        int profit=0;
        int buy=0,sell=1;
        int buy_cur=prices[buy];
        while(sell<prices.size()){
            profit=max(profit,prices[sell]-buy_cur);
            sell++;
            buy++;
            buy_cur=min(buy_cur,prices[buy]);
        }
        return profit;
    }
};
