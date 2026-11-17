
class Solution {
public:
    int getLucky(string s, int k) {
        int sum = 0;

        for (char c : s) {
            int num = c - 'a' + 1;

            while (num > 0) {
                sum += num % 10;
                num /= 10;
            }
        }

        k--;

        while (k > 0) {
            int temp = 0;

            while (sum > 0) {
                temp += sum % 10;
                sum /= 10;
            }

            sum = temp;
            k--;
        }

        return sum;
    }
};
