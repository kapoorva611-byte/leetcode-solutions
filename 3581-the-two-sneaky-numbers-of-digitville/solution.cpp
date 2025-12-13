class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        vector<int> seen(nums.size(),false);
        vector<int> res;
        for(int i=0;i<nums.size();i++){
            if(seen[nums[i]]){
                res.push_back(nums[i]);
            }else{
                seen[nums[i]]=true;
            }
        }
        return res;
    }
};
