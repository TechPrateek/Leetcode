class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n=nums.size();
        int score=0;
        int idx=0;
        for(int i=0;i<n;i++){
            int maxi=INT_MIN;
            for(int j=0;j<=i;j++){
                if(nums[j] > maxi){
                    maxi = nums[j];
                }
            }
            int mini=INT_MAX;
            for(int p=i;p<n;p++){
                if(nums[p] < mini){
                    mini=nums[p];
                }
            }
            score=maxi-mini;
            if(score<=k){
                return i;
            }

        }
        return -1;
    }
};