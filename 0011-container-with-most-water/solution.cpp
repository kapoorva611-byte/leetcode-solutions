class Solution {
public:
    int maxArea(vector<int>& height) {
        int left=0;
        int right=height.size()-1;
        int Area;
        while(left<right){
            int currentArea=min(height[left],height[right])*(right-left);
            Area=max(Area,currentArea);
            if(height[left]<height[right]){
                left++;
            }else{
                right--;
            }
        }
        return Area;
    }
};
