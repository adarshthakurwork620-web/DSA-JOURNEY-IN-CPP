class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxprofit = 0 ;
        int sell = prices[0];
        for(int i = 1 ; i < prices.size() ; i++ ){
            if(prices[i]> sell){
                int profit = prices[i] - sell;
                maxprofit=max(maxprofit,profit);
            }
            sell = min(sell,prices[i]);
        }
        return maxprofit;
    }
};