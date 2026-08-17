class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_map<string,int>f;
        for(auto x:paths){
            string s1=x[0];
            f[s1]++;
        }
        for(auto y:paths){
            string s2=y[1];
            if(f[s2]==0){
                return s2;
            }
        }
        return "";
    }
};
