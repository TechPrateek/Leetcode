class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n=nums.size();
        int m=(nums[n-1]*nums[n-2]*nums[n-3]);
        int p=(nums[0]*nums[1]*nums[n-1]);
        return max(m,p);
    }
};