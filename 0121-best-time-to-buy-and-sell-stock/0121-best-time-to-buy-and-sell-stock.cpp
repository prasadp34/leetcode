class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini=prices[0];
        int profit=0;
        int cost=0;
        for(int i=0;i<prices.size();i++){
            cost=prices[i]-mini;
            profit=max(cost,profit);
            mini=min(prices[i],mini);
        }
        return profit;
        
    }
};