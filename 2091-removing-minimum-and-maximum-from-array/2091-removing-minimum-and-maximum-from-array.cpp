class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n=nums.size();
        int idx1=0;
        int idx2=0;
        int mini=nums[0];
        int maxi=nums[0];
        for(int i=1;i<n;i++){
            if(nums[i] < mini){
                mini=nums[i];
                idx1=i;
            }
            if(nums[i]>maxi){
                maxi=nums[i];
                idx2=i;
            }
        }
        int ans1=max(idx1,idx2)+1;
        int ans2=n - (min(idx1,idx2));
        int ans3=(min(idx1,idx2)+1)+(n-max(idx1,idx2));
        return min({ans1,ans2,ans3});
    }
};