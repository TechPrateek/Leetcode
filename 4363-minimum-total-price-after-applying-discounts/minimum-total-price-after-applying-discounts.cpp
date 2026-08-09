class Solution {
public:
    double minPrice(vector<int>& prices, vector<int>& discounts) {
        int n=prices.size();
        int m=discounts.size();
        sort(prices.rbegin(),prices.rend());
        sort(discounts.rbegin(),discounts.rend());
        double sum = 0;
        for(int i = 0; i < n ; i++){
            if(i < m){
                sum+=(prices[i] * (100 - discounts[i])) / (double)100;   
            }
            else{
                sum+=prices[i];
            }
        }
        return sum;
    }
};