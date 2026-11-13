class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini=prices[0];
        int maxp=0;

        for(int i=1; i<prices.size(); i++){
            
            if(prices[i]<mini){
                mini=min(mini, prices[i]);
            }
            else{
               int profit=prices[i]-mini;
               maxp=max(maxp, profit);
            }
        }
        return maxp;
    }
};