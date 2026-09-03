class Solution {
public:
    bool hasAlternatingBits(int n) {
        string b;
        if(n==0){
            b="0";
        }
        else{
            while(n > 0){
                b += ( (n % 2)+'0');
                
                n = n / 2;
            }
            reverse(b.begin(),b.end());
        }
        for(int i = 1; i < b.size(); i++){
            if(b[i-1]==b[i]){
                return false;
            }
        }
        return true;
    }
};