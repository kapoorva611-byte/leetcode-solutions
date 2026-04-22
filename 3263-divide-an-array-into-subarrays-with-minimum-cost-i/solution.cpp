class Solution {
public:
    int minimumCost(vector<int>& nums) {
        int a = 51, b = 51;

        for (int i = 1; i < nums.size(); i++) { // start from 1
            if (nums[i] < a) {
                b = a;
                a = nums[i];
            } else if (nums[i] < b) {
                b = nums[i];
            }
        }

        return nums[0] + a + b;
    }
};
