class Solution {
public:
    int subtractProductAndSum(int n) {
        int mul=1;
        int sum=0;

        while(n > 0){
            int last = n % 10;
            sum+=last;
            mul*=last;
            n=n/10;
        }
        return mul-sum;
    }
};