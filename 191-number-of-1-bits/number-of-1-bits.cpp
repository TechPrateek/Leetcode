class Solution {
public:
    int hammingWeight(int n) {
        string binary;
        if(n == 0)
            binary = "0";
        else{   
            while(n > 0){
                binary += (n % 2 ) + '0';
                n = n / 2;
            }
        }
        int cnt=0;
        for(int i = 0 ;i < binary.size();i++){
            if(binary[i]=='1'){
                cnt++;
            }
        }
        return cnt;
    }
};