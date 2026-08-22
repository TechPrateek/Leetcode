class Solution {
public:
    bool checkDivisibility(int n) {
        int temp=n;
        int digitsum=0;
        int productsum=1;
        while(temp > 0){
            int last = temp % 10;
            digitsum += last;
            productsum = productsum * last;
            temp=temp/10;
        }
        int sum=digitsum+productsum;
        if(n%sum==0){
            return true;
        }
        return false;
    }
};