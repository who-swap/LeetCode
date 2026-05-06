class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min = INT_MAX;
        int sum =0;
        for(auto price:prices){
            if(min>price){
                min = price;
            }
          
            else{
                sum = sum + (price - min);
                min = price;
            }
        }
        return sum;
    }
};