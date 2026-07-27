class Solution {
public:
    bool isSameAfterReversals(int num) {
        int rev = 0;
        int n = num;
        while(n > 0){
            int last = n % 10;
            rev = rev * 10 + last;
            n/=10;   
        }
        int m = rev;
        int doublerev = 0;
        while(m>0){
            int last = m % 10;
            doublerev = doublerev * 10 + last;
            m/=10;
        }
        return doublerev == num;
    }
};