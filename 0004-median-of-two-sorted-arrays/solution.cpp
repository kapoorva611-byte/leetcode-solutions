class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int m=nums2.size();
        vector<int>merged;
        for(int i=0;i<n;i++){
            merged.push_back(nums1[i]);
        }
        for(int i=0;i<m;i++){
            merged.push_back(nums2[i]);
        }
        sort(merged.begin(),merged.end());
        if((n+m)%2==1){
            return static_cast<double>(merged[(n+m)/2]);
        }else{
            int middle1=merged[(n+m)/2-1];
            int middle2=merged[(n+m)/2];
            return (static_cast<double>(middle1)+static_cast<double>(middle2))/2.0;
        }
    }
};
