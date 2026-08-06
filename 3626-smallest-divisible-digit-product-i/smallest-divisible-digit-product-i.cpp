class Solution {
public:
    int smallestNumber(int n, int t) {
        int temp=n;
        int mini=INT_MAX;
        for(int i=n;i<=100;i++){
            int temp = i;
            int product = 1;
            while(temp>0){
                int last=temp%10;
                product*=last;
                temp/=10;
            }
            if(product % t == 0 ){
                return i;
            }
        }
        return -1;
        
    }
};