class Solution {
public:
    bool check(long long s, vector<int>&monsters, vector<long long>&bonus){
        for(int i=0; i<monsters.size(); i++){
            if(s+bonus[i]<monsters[i]){
                return false;
            }
            s=max(0LL,s-(long long)monsters[i]);
        }
        return true;

    }
    long long minInitialStrength(vector<int>& monsters, vector<vector<int>>& boosts) {
        int n=monsters.size();
        vector<long long> diff(n+1,0);
        for(auto &b:boosts){
            diff[b[0]]+=b[2];
            if(b[1]+1<n){
                diff[b[1]+1]-=b[2];
            }
        }
        vector<long long> bonus(n);
        bonus[0]=diff[0];
        for(int i=1; i<n;i++){
            bonus[i]=bonus[i-1]+diff[i];
        }
        long long lo=0, hi=1e14;
        while(lo<hi){
            long long mid=(lo+hi)/2;
            if(check(mid, monsters, bonus)){
                hi=mid;
            }else{
                lo=mid+1;
            }
        }
        return lo;
        
    }
};
