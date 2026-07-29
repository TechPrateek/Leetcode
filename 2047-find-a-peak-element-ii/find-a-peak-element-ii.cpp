int maxelement(vector<vector<int>> &nums,int mid){
    int maxi=-1;
    int idx=-1;
    for(int i=0;i<nums.size();i++){
        if(nums[i][mid]>maxi){
            maxi=nums[i][mid];
            idx=i;
        }
    }
    return idx;
}
class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>&nums) {
    int n=nums.size();
    int m=nums[0].size();
    int low=0;
    int high=m-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        int row=maxelement(nums,mid);
        int left=-1;
        int right=-1;
        if(mid-1>=0){
            left=nums[row][mid-1];
        }
        if(mid+1<m){
            right=nums[row][mid+1];
        }
        if(nums[row][mid]>left && nums[row][mid]>right){
            return {row,mid};
        }
        else if(nums[row][mid]>left){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }return {-1,-1};
    }
};