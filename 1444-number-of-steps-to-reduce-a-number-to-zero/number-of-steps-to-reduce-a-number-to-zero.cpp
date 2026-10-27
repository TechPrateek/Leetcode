int steps(int n,int cnt){
    if(n==0){
        return cnt;
    }
    if(n%2==0){
        return steps(n/2,cnt+1);
    }
    else{
        return steps(n-1,cnt+1);
    }
}
int helper(int n){
    return steps(n,0);
}

class Solution {
public:
    int numberOfSteps(int num) {
        return helper(num);
    }
};