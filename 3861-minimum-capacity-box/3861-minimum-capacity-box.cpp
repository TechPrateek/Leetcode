class Solution {
public:
    int minimumIndex(vector<int>& capacity, int itemsize) {
        int mini=INT_MAX;
        int idx=INT_MAX;
        for(int i=0;i < capacity.size();i++){
            if(capacity[i] >= itemsize){
                mini=min(mini,capacity[i]);
            }
            
            
        }
        for(int i=0;i < capacity.size();i++){
            if(mini==capacity[i]){
                idx=min(idx,i);
            }
        }
        if(idx==INT_MAX) return -1;
        return idx;
    }
};