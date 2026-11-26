class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        vector<int> arr(2);
        unordered_map<int,int>mp;
        for(int i = 0; i < nums.size(); i++) {
            mp[nums[i]]++;
        }
        int p=0;
        for(auto it : mp) {
            if(it.second==1){
                arr[p]=it.first;
                p++;
            }
        }
        return arr;
    }
};