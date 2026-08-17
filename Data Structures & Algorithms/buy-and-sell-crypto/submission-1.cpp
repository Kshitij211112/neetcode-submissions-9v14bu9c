class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = 0;
        int n = prices.size();
        int minPrice = prices[0];

        for(int i=0;i<n;i++){
            minPrice = min(minPrice, prices[i]);

            int profit = prices[i] - minPrice;

            maxProfit = max(maxProfit, profit);
        }

        return maxProfit;
    }
};
