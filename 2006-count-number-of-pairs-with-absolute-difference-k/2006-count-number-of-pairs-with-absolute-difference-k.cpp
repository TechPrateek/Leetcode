class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        int cnt = 0;

        for(int x : nums) {
            cnt += mp[x - k];
            cnt += mp[x + k];

            mp[x]++;
        }

        return cnt;
    }
};