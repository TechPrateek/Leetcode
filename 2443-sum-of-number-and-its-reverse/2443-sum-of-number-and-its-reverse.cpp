class Solution {
public:
    bool sumOfNumberAndReverse(int num) {
        if(num==0) return true;
        for(int i = num/2 ;i < num;i++){
            int rev=0;
            int temp=i;
            while (temp > 0) {
                int digit = temp % 10;
                rev = rev * 10 + digit;
                temp = temp / 10;
            }
            if((rev + i) == num){
                return true;
            } 
        } 
        return false;
    }
};