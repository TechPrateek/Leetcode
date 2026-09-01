class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        int cnt=0;
        for(int i=low;i<=high;i++){
            string n=to_string(i);
            if(n.size() % 2 != 0) continue;
            int sum=0;
            for(int j=0;j<n.size();j++){
                sum += n[j] - '0';

            }
            int left=0;
            for(int j=0;j<n.size()/2;j++){
                left+=n[j]-'0';
            }
            int right=sum-left;
            if(left==right){
                cnt++;
            }
        }
        return cnt;
    }
};