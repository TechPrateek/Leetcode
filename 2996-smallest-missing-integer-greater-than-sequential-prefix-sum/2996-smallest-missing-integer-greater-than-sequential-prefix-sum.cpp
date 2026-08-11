class Solution {
public:
    int missingInteger(vector<int>& arr) {
        
        int n = arr.size();
        int sum=arr[0];
        
        for(int j = 1 ; j < n ; j++){
            
            if(arr[j] == arr[j - 1] + 1){
                sum+=arr[j];
            }
            else {
                break;
            }
            
        }
        unordered_set<int> st(arr.begin(), arr.end());
        while(st.count(sum)){
            sum++;
        }
        return sum;
       
    }
};