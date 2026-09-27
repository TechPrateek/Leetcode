class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        map<int,int>mp;
        vector<int>ans;
        for(int i = 0 ; i < nums.size() ; i++){
            mp[nums[i]]++;
        }
        while(ans.size()<nums.size()){
            for(auto &it:mp){
                if(it.second > 0){
                    ans.push_back(it.first);
                    it.second--;
                }

            }
        }
        return ans;
    }
};
