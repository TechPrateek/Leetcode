class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans(n);
        int even=0;
        int odd=1;
        for(int i=0;i<nums.size();i=i+1){
            if(nums[i]%2==0){
                ans[even]=nums[i];
                even+=2;
            }
            else{
                ans[odd]=nums[i];
                odd=odd+2;
            }
        }
        return ans;
    }
};