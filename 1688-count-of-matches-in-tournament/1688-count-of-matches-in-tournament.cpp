class Solution {
public:
    int numberOfMatches(int n) {
        int count=0;
        while(n != 1){
            int adv = n/2;
            count+=adv;
            n=n-adv;
        }
        return count;
    }
};