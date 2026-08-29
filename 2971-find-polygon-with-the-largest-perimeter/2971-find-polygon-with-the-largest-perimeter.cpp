class Solution {
public:
    long long largestPerimeter(vector<int>& nums) {
        int n = nums.size();
        
        
        sort(nums.begin(), nums.end());
        for (int k = n - 1; k >= 2; k--) {
            long long sum=0;
            for(int i=0;i<k;i++){
                sum+=nums[i];
                
            }
            if(sum > nums[k]){
                return sum+nums[k];
            }
        }
        return -1;
    }
};