class Solution {
public:
    int maxConsistentColumns(vector<vector<int>>& grid, int limit) {
        int m=grid.size(), n=grid[0].size();
        vector<vector<bool>> good(n, vector<bool>(n,true));
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                for(int r=0;r<m;r++){
                    if(abs(grid[r][j]-grid[r][i])>limit){
                        good[i][j]=false;
                        break;
                    }
                }
            }
        }
        vector<int> dp(n,1);
        int ans=1;
        for(int j=0; j<n; j++){
            for(int i=0; i<j; i++){
                if(good[i][j]){
                    dp[j]=max(dp[j],dp[i]+1);
                }
            }
            ans=max(ans,dp[j]);
        }
        return ans;
    }
};
