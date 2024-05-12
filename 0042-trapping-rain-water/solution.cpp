class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        if (n == 0) return 0;
        
        int trappedWater = 0;
        int leftMax[n], rightMax[n];
        
        // Calculate left max heights
        leftMax[0] = height[0];
        for (int i = 1; i < n; ++i) {
            leftMax[i] = max(leftMax[i - 1], height[i]);
        }
        
        // Calculate right max heights
        rightMax[n - 1] = height[n - 1];
        for (int i = n - 2; i >= 0; --i) {
            rightMax[i] = max(rightMax[i + 1], height[i]);
        }
        
        // Calculate trapped water
        for (int i = 0; i < n; ++i) {
            trappedWater += max(min(leftMax[i], rightMax[i]) - height[i], 0);
        }
        
        return trappedWater;
    }
};

