string convert(int n, int base) {
    if (n == 0) return "0";

    string digits = "0123456789ABCDEF";
    string ans = "";

    while (n > 0) {
        ans += digits[n % base];
        n /= base;
    }

    reverse(ans.begin(), ans.end());
    return ans;
}

bool isPalindrome(string s) {
    int i = 0;
    int j = s.size() - 1;

    while (i < j) {
        if (s[i] != s[j]) {
            return false;
        }
        i++;
        j--;
    }

    return true;
}

class Solution {
public:
    bool isStrictlyPalindromic(int n) {
        
        for(int i=2;i<=16;i++){
            if(isPalindrome(convert(n,i))==false){
                return false;
            }
        }
        return true;
    }
};