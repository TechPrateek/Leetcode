class Solution {
public:
    int sumBase(int n, int k) {
        string s="";
        //b
        while(n > 0){
            s += to_string(n % k);
            n /= k;
        }
        reverse(s.begin(),s.end());
        int m=stoi(s);
        int sum=0;
        while(m>0){
            sum+=m%10;
            m/=10;
        }
        return sum;
    }
};