string count(int n){
    if(n == 0) return "0";
    string res="";
    while(n!=1){
        if(n % 2 == 0){
            res += '0';
        }
        else{
            res += '1';
        }
        n=n/2;
        
    }
    res+='1';
    reverse(res.begin(),res.end());
    return res;
}
class Solution {
public:
    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        int sum=0;
        for(int i=0;i<nums.size();i++){
            string res = count(i);
            int cnt=0;
            for(int j=0;j<res.size();j++){
                if(res[j]=='1'){
                    cnt++;
                }
            }
            if(cnt==k){
                sum+=nums[i];
            }
        }
        return sum;
    }
};