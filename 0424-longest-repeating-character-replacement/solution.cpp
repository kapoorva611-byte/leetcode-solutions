class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int> freq(26, 0);
        
        int left = 0;
        int maxFreq = 0;
        int ans = 0;
        
        for(int right = 0; right < s.size(); right++) {
            
            // increase frequency of current char
            freq[s[right] - 'A']++;
            
            // update max frequency inside window
            maxFreq = max(maxFreq, freq[s[right] - 'A']);
            
            // check if window invalid
            if((right - left + 1) - maxFreq > k) {
                freq[s[left] - 'A']--;
                left++;
            }
            
            ans = max(ans, right - left + 1);
        }
        
        return ans;
    }
};
