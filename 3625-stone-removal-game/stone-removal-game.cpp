class Solution {
public:
    bool canAliceWin(int n) {
        if(n<10) return false;
        int ans;
        for(int i = 10 ; i >= 1 ; i--){
            n=n-i;
            if(n == 0){
                if(i%2==0){
                    return true;
                }
                else{
                    return false;
                }
            }
            if(n < 0){
                if(i%2==0){
                    return false;
                }
                else{

                    return true;
                }
            }
            
        }
        return true;
    }
};