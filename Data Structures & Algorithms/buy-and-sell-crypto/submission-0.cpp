class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = 0;
        int n = prices.size();

        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int profit = prices[j] - prices[i];

                if(profit>0){
                    maxProfit = max(maxProfit, profit);
                }
            }
        }

        return maxProfit;
    }
};
