class Solution {
public:
    long long maxPairStrength(vector<int>& nums) {
        long long maxi = INT_MIN;
        for(int i=0;i<nums.size();i++){
            long long str;
            long long g;            
            for(int j=0;j<nums.size();j++){
                if(i!=j){
                    str=nums[i]; 
                    str=str*nums[j]; 
                    g=pow(gcd(nums[i],nums[j]),2);      
                    maxi=max(maxi,str/g);
                }
            }
        }
        return maxi;
    }
};