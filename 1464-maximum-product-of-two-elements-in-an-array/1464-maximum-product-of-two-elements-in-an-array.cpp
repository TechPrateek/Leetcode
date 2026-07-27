class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxi=INT_MIN;
        for(int i=0;i<nums.size();i++){

            for(int j=0;j<nums.size();j++){
                if(i==j){
                    continue;
                }
                int num=(nums[i]-1)*(nums[j]-1);
                maxi=max(maxi,num);
            }
        }return maxi;
    }
};