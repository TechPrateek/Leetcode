class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        map<int, int >mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        int maxi=*max_element(nums.begin(),nums.end());
        int idx;

        if(k>maxi){
            return k;
        }
        
        else if(k==maxi){
            return k+maxi;
        }
        for(int i=k;i<=maxi;i=i+k){
            idx=i;
            if(mp.find(i) == mp.end()){
                
                return i;
            }
    
        }
        return idx+k;
    }
};