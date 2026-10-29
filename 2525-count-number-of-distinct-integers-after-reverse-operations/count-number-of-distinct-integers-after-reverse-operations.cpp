class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
        set<int> s;
        

        for (int num : nums) {
            s.insert(num);

            int rev = 0;
            while (num > 0) {
                int rem = num % 10;
                rev = rev * 10 + rem;
                num /= 10;
            }

            s.insert(rev);
        }

        return s.size();
    }
};