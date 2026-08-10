class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        vector<int>temp=nums;
        vector<int>temp2=nums;
        sort(temp.begin(),temp.end());
        sort(temp2.rbegin(),temp2.rend());
        if(temp==nums || temp2==nums){
            return true;
        }
        else{
            return false;
        }
        
        
    }
};