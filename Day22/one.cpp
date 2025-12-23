/*LEETCODE:BEST TIME TO BUY AND SELL STOCK*/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans=0;
        int n=prices.size();
        int sufmax=prices[n-1];
        for(int i=n-2;i>=0;i--){
            ans=max(ans,sufmax-prices[i]);
            sufmax = max(sufmax,prices[i]);
        }
        return ans;
    }
};