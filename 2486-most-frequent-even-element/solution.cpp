class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int maxFreq=0,ans=-1;
        int count=0;
        for(int i=0; i<nums.size();i++){
            if(nums[i]%2!=0)continue;
            count=1;
            while(i+1<nums.size() &&nums[i]==nums[i+1]){
                count++;
                i++;
            }
            if(count>maxFreq){
                maxFreq=count;
                ans=nums[i];
            }else if(count==maxFreq && nums[i]<ans){
                ans=nums[i];
            }
        }
        return ans;
    }
};
