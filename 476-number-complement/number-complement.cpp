string count(int n){
    string res="";
    while(n!=1){
        if(n % 2 == 0){
            res += '0';
        }
        else{
            res += '1';
        }
        n=n/2;
        
    }
    res+='1';
    reverse(res.begin(),res.end());
    return res;
}

long long decimal(string s) {
    long long num = 0;
    long long power = 1;
    int n = s.size();

    for (int i = n - 1; i >= 0; i--) {
        if (s[i] == '1') {
            num += power;
        }
        power *= 2;
    }

    return num;
}
class Solution {
public:
    int findComplement(int num) {
        string n=count(num);
        for(int i=0;i<n.size();i++){
            if(n[i]=='1'){
                n[i]='0';
            }
            else{
                n[i]='1';
            }
        }
        return decimal(n);
    }
};