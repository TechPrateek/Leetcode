string inbinary(int n) {
    if (n == 0) return "0";

    string binary = "";

    while (n > 0) {
        binary = to_string(n % 2) + binary;
        n = n / 2;
    }

    return binary;
}
int count1(string bin){
    int cnt=0;
    for(int i=0;i<bin.size();i++){
        if(bin[i]=='1'){
            cnt++;
        }
    }
    return cnt;
}
class Solution {
public:
    int calculateScore(int a, int b) {
        string m = inbinary(a);
        string n = inbinary(b);
        int s1=count1(m);
        int s2=count1(n);
        if(s1>=s2){
            return s1*s2;
        }
        else{
            return s2/s1;
        }

    }
};