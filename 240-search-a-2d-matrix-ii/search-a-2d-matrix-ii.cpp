bool binary(vector<int>& nums,int target){
    int n=nums.size();
    int low=0;
    int high=n-1;
    while(low <= high){
        int mid=low+(high-low)/2;
        if(nums[mid]==target){
            return true;
        }
        else if(nums[mid]>target){
            high=mid-1;
        }
        else{
            low=mid+1;
        }

    }
    return false;
}
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& nums, int target) {
        for(int i=0;i<nums.size();i++){
            if(binary(nums[i],target)){
                return true;
            }
        }
        return false;
    }
};