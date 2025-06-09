class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int>m;
        for(int i=0;i<nums.size();i++){
            if(m.count(nums[i])){
                m[nums[i]]++;
            }else{
                m[nums[i]]=1;
            }
        }
        vector<int>res;
        for(auto p:m){
            if(p.second>(nums.size()/3)){
                res.push_back(p.first);
            }
        }
        return res;
    }
};
