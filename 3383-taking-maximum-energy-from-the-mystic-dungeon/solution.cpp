#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

class Solution {
public:
    int maximumEnergy(vector<int>& energy, int k) {
        int n = energy.size();
        if (n == 0) return 0;

        // compute cumulative sums in-place from right to left
        for (int i = n - k - 1; i >= 0; --i)
            energy[i] += energy[i + k];  // reuse input array, no dp needed

        // find maximum energy value
        return *max_element(energy.begin(), energy.end());
    }
};

