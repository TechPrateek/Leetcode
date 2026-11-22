    class Solution {
    public:
        int countDominantElements(vector<int>& nums) {
            int n=nums.size();
            int cnt=0;
            if(n==1){
                return 1;
            }
            if(nums[0] >= nums[1]) cnt++;
            if(nums[n-1] >= nums[n-2]) cnt++;
            
            for(int i = 1; i < nums.size()-1 ; i++){

                int avg = (nums[i-1] + nums[i+1]) ;
                if(2 * nums[i] >= avg){/////////////////////
                    cnt++;
                }
            }
            return cnt;
        }
    };