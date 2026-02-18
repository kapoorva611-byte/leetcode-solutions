class Solution {
public:
    int longestBalanced(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;

        for(int i = 0; i < n; i++) {
            
            unordered_map<int, int> evenFreq;
            unordered_map<int, int> oddFreq;
            
            int distinctEven = 0;
            int distinctOdd = 0;

            for(int j = i; j < n; j++) {
                
                if(nums[j] % 2 == 0) {
                    evenFreq[nums[j]]++;
                    if(evenFreq[nums[j]] == 1)
                        distinctEven++;
                } 
                else {
                    oddFreq[nums[j]]++;
                    if(oddFreq[nums[j]] == 1)
                        distinctOdd++;
                }

                if(distinctEven == distinctOdd) {
                    ans = max(ans, j - i + 1);
                }
            }
        }

        return ans;
    }
};

