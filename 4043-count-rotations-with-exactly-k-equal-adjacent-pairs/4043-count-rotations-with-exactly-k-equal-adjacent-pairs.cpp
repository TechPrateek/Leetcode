class Solution {
public:
    int countRotations(string s, int k) {
        int n=s.size();
        int ans=0;
        for(int j = 0; j < n; j++) {
            int first = s[0];
            for(int i = 0 ; i < s.size() - 1 ; i++) {
                s[i] = s[i + 1];
            }
            s[n - 1] = first;
            int cnt=0;
            for(int i = 0 ; i < n-1 ; i++){

                if(s[i]==s[i+1]){
                    cnt++;
                }

            }
            if(cnt==k){
                ans++;
            }

        }
        return ans;
    }
};