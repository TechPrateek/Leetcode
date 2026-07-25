class Solution {
public:
    int maxProduct(int n) {
        vector<int>ans;
        while(n>0){
            ans.push_back(n%10);
            n/=10;
        }
        sort(ans.begin(),ans.end());
        int l=ans.size();
        return ans[l-1]*ans[l-2];
    }
};