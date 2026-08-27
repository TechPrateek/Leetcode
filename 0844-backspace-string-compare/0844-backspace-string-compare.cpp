class Solution {
public:
    bool backspaceCompare(string s, string t) {
        vector<char>temp1;
        vector<char>temp2;
        int i=0;
        int n=s.size();
        int m=t.size();
        while( i < n ){
            if(s[i]!='#'){
                temp1.push_back(s[i]);
            }
            else if(!temp1.empty()){
                temp1.pop_back();
            }
            i++;
        }
        int j=0;
        while( j < m ){
            if(t[j]!='#'){
                temp2.push_back(t[j]);
            }
            else if (!temp2.empty()) {
                temp2.pop_back();
            }
            j++;
        }
        return temp1==temp2;
    }
};