class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int left = 0;
        int ans = 0;

        for(int right=1;right<prices.size();right++){
            if(prices[right] > prices[left]){
                ans = max(ans, prices[right] - prices[left]);
            }

            else{
                left = right;
            }
        }
        return ans;
    }
};
