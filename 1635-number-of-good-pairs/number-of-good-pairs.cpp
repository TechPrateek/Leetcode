class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>mp;
        for(int i = 0; i < n; i++){
            mp[nums[i]]++;
        }
        if(mp.size()==1){
            return (n*(n-1))/2;
        }
       
        int sum=0;
        for(auto it:mp){
            int k = it.second;
            sum += k * (k - 1) / 2;
            
        }
        return sum;
    }
};