class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<double>merge;
        int n=nums1.size();
        int m=nums2.size();
        for(int i=0;i<n;i++){
            merge.push_back(nums1[i]);
        }
        for(int i=0;i<m;i++){
            merge.push_back(nums2[i]);
        }
        sort(merge.begin(),merge.end());
        int k=merge.size();
        if(k%2==0){
            return (merge[k/2]+merge[(k/2)-1])/2.0;
            
        } 
        else{
            
            return merge[k/2];
            
        }

    }
};