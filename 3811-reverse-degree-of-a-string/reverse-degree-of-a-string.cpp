class Solution {
public:
    int reverseDegree(string s) {
        int degree = 0;
        for(int i=0;i<s.size();i++){
            int idx='z'-s[i];
            degree +=( idx+1)*(i+1); 
        }
        return degree;
    }
};