class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy=prices[0],profit=0;
        for(int i=1;i<prices.size();i++){
            if(buy>prices[i]){
                buy=prices[i];
            }
            else if(prices[i]-buy>profit){
                profit=prices[i]-buy;
            }
        }
        return profit;
    }
};