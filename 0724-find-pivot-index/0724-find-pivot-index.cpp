class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        
        
        for(int j=0;j < nums.size(); j++){
            int leftsum = 0;
            int rightsum = 0;
            for(int i = 0; i < n; i++){
                if(i < j) {
                    leftsum += nums[i];
                }
                else if(i > j) {
                    rightsum += nums[i];
                }
            }
            if(leftsum==rightsum){
                return j;
            }
        }
        return -1;
    }
};