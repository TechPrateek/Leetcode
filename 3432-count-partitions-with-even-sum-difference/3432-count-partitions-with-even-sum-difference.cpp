class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }//36

        int cnt=0;
        for(int i=0;i<nums.size()-1;i++){
            int diff=nums[i]-(sum-nums[i]);
            if(diff%2==0){
                cnt++;
            }
        }
        return cnt;

    }
};