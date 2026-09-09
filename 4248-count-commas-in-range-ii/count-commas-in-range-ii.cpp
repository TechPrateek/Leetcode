class Solution {
public:
    long long countCommas(long long n) {
        long long ans=0;
        if(n >=1000ll) ans+=n-999ll;
        if(n >= 1000000ll) ans+=n-999999ll;
        if(n >= 1000000000ll) ans+=n-999999999ll;
        if(n >= 1000000000000ll) ans+=n-999999999999ll;
        if(n >= 1000000000000000ll) ans+=n-999999999999999ll;
        return ans;
    }
};