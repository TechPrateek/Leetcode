class Solution {
public:
    bool judgeSquareSum(int c) {
        for(long long a=0;a*a<=c;a++){
            long long b = c - a * a;
            long long low = 0;
            long long high = c;
            while(low<=high){
                long long mid = low+(high-low)/2;
                long long sq = mid * mid;
                if(sq==b){
                    return true;
                }
                else if(sq < b){
                    low=mid+1;
                }
                else{
                    high=mid-1;
                }
            }
            
        }
        return false;
    }
};