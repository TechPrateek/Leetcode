class Solution {
public:
    int nearestDrone(vector<vector<int>>& drones, vector<int>& target) {
        int n=drones.size();
        int mini=INT_MAX;
        int idx=-1;
        for(int i = 0 ; i < n ;i++){
            int val=abs(drones[i][0]-target[0])+abs(drones[i][1]-target[1]);
            if(drones[i][2] >= val){
                if(val < mini ){
                    mini=val;
                    idx=i;
                }
            }
            
        }
        return idx;
    }
};