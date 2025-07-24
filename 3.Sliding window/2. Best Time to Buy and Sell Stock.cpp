class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int current_profit = 0,min_price = prices[0],max_profit = 0;

        for(int i = 0; i < prices.size(); i++){
            if(prices[i] < min_price){
                min_price = prices[i];
            }
            current_profit = prices[i] - min_price;
            if(current_profit > max_profit){
                max_profit = current_profit;
            }
        }

        return max_profit;
    }
};

// https://www.youtube.com/watch?v=E2-heUEnZKU

// maintain min prince , max profit, current profit and loop till end
