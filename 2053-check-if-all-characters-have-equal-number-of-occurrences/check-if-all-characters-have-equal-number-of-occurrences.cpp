class Solution {
public:
    bool areOccurrencesEqual(string s) {
        map<char,int>mp;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        set<int> st;

        for(auto it : mp){
            st.insert(it.second);
        }
        return st.size()==1;
    }
};