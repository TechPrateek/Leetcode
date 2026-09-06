class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int sum = 0;
        int leftsum = 0;
        for(int i = 0; i < nums.size() ; i++ ){
            sum+=nums[i];
        }
        for(int i = 0; i < nums.size() ; i++ ){
            int rightsum= sum - leftsum - nums[i];
            if(rightsum==leftsum){
                return i;
            }
            leftsum += nums[i];
        }
        return -1;
    }
};