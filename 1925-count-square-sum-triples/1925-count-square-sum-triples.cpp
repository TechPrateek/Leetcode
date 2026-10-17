class Solution {
public:
    int countTriples(int n) {
        int cnt=0;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                int c=sqrt(i*i+j*j);
                if(c<=n && i*i + j*j == c*c){
                    cnt++;
                    }
            }
        }
        return cnt;
    }
};