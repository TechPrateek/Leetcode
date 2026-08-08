class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& nums) {
        int maxi=INT_MIN;
        int idx=-1;
        for(int i=0;i<nums.size();i++){
            int cnt=0;
            for(int j=0;j<nums[0].size();j++){
                if(nums[i][j]==1){
                    cnt++;
                }
            }
        
            if(cnt>maxi){
                maxi=cnt;
                idx=i;

            }
        }
        return {idx,maxi};
    }
};