class Solution {
public:
    bool searchMatrix(vector<vector<int>>& nums, int target) {
        int low=0;
        int n=nums.size();
        int m=nums[0].size();
        int high=m*n-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            int row = mid / m;
            int col = mid % m;
            if(nums[row][col]==target){
                return true;
            }
            else if(nums[row][col]>target){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
            
        }
        return false;

    }
};