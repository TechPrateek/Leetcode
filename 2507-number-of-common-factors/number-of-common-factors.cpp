class Solution {
public:
    int commonFactors(int a, int b) {
        int cnt = 0;
        int i=1;
        while(i<=a && i<=b){
            if(a%i==0 && b%i==0){
                cnt++;
            }
            i++;
        }
        return cnt;
    }
};