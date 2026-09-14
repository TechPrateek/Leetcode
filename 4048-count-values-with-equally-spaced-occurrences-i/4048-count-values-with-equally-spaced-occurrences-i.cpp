class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        unordered_map<int, vector<int>> mp;
        for(int i = 0; i < nums.size(); i++) {
            mp[nums[i]].push_back(i);
        }
        int ans=0;
        for(auto it : mp){
            vector<int>num = it.second;
            if(num.size()==3){
                if(num[1]-num[0]==num[2]-num[1]){
                    ans++;
                }
            }
        }
        return ans;
    }
};