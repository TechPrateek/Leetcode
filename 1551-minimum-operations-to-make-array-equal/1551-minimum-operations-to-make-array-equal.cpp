class Solution {
public:
    int minOperations(int n) {
        vector<int>nums(n);
        for(int i=0;i<n;i++){
            nums[i]=(2*i)+1;
        }
        int cnt=0;
        int med=nums[n/2];
        for(int num:nums){
            cnt+=abs(med-num);
        }
        return cnt/2;
    }
};