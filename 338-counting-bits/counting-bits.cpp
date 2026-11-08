class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans;

        for (int i = 0; i <= n; i++) {
            int num = i;
            int count = 0;

            while (num > 0) {
                if (num % 2 == 1) {
                    count++;
                }
                num = num / 2;
            }

            ans.push_back(count);
        }

        return ans;
    }
};