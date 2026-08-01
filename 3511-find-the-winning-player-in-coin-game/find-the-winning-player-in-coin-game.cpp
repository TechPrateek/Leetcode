class Solution {
public:
    string winningPlayer(int x, int y) {
        int turns=0;
        int temp=y/4;
        if(temp <= x){
            turns=temp;
        }
        else{
            turns=x;
        }
        if(turns%2==0){
            return "Bob";
        }
        return "Alice";
    }
};