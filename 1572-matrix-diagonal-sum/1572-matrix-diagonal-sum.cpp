class Solution {
public:
    int diagonalSum(vector<vector<int>>& nums) {
        int n=nums.size();
        
        int sum=0;
        for(int i=0;i<n;i++){
            sum += nums[i][i];
            sum += nums[i][n-1-i];
        }
        if(n%2==1){
            sum-=nums[n/2][n/2];
        }
        return sum;
    }
};