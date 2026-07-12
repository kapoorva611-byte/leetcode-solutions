class Solution {
public:
    int minimumCost(vector<int>& nums, int k) {
        const long long MOD=1e9+7;
        long long cur=k;
        long long ops=0;
        for(int x:nums){
            if(cur<x){
                long long need=(x-cur+k-1)/k;
                ops+=need;
                cur+=need*1LL*k;
            }
            cur-=x;
        }
        ops%=MOD;
        return (ops*(ops+1)/2)%MOD;
    }
};
