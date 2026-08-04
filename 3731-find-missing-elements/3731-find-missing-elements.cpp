class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int maxi=*max_element(nums.begin(),nums.end());
        int mini=*min_element(nums.begin(),nums.end());
        sort(nums.begin(),nums.end());
        vector<int>ans;
        int j=0;
        for(int i=mini;i<=maxi;i++){    
            if(nums[j]==i && j < nums.size()){
                j++;
            }
            else{
                ans.push_back(i);
            }
        }
        
        return ans;
    }

};