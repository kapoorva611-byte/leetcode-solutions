#include <vector>
using namespace std;

class Solution {
public:
    int numEquivDominoPairs(vector<vector<int>>& dominoes) {
        int freq[100] = {0};  
        int ans = 0;
        
        for (auto &dom : dominoes) {
            int a = dom[0], b = dom[1];
            int key = min(a,b) * 10 + max(a,b); 
            ans += freq[key]; 
            freq[key]++;      
        }
        
        return ans;
    }
};

