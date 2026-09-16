class Solution {
public:
    bool digitCount(string num) {
        map<char,int>mp;
        for(int i=0;i<num.size();i++){
            mp[num[i]]++;
        }
        
        for(int i = 0 ; i < num.size(); i++) {
            if(mp[i + '0'] != num[i] - '0'){
                return false;
            }
        }
        return true;
        
    }
};