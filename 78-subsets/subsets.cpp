class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n=nums.size();
        int sub=(1 << n);
        vector<vector<int>>ans;
        for(int num=0;num<sub;num++){
            vector<int>list;
            for(int j = 0 ; j < n ; j++){
                if(num & (1 << j)){//ith bit set or not
                    list.push_back(nums[j]);
                }
            }
            ans.push_back(list);

        }
        
        return ans;
    }
};