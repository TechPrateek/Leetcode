class Solution {
public:
    int minRotations(string s) {
        int curr = 0;
        int ans = 0;

        for(char ch : s) {
            int next = ch - '0';

            int diff = abs(curr - next);

            ans += min(diff, 10 - diff);

            curr = next;
        }

        return ans;
    }
};