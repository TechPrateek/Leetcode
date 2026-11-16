class Solution {
public:
    string digitSum(string s, int k) {
        while(s.size()>k){
            string sums="";
            for(int i = 0; i < s.size(); i += k){
                int sum=0;
                for(int j = i; j < i + k && j < s.size(); j++){
                    sum += s[j] - '0';
                }
                sums += to_string(sum);;
                
            }
            s = sums;
        }
        return s;
    }
};