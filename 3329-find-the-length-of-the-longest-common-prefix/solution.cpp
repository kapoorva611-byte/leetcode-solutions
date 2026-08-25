class Solution {
public:
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
        int n1=arr1.size();
        int n2=arr2.size();
        unordered_set<string>st;
        for(int i=0;i<n1;i++){
            string s=to_string(arr1[i]);
            string temp="";
            for(int j=0;j<s.size();j++){
                temp+=s[j];
                st.insert(temp);
            }
        }
        int ans=0;
        for(int i=0; i<n2;i++){
            string s=to_string(arr2[i]);
            string temp="";
            for(int j=0;j<s.size();j++){
                temp+=s[j];
                if(st.find(temp)!=st.end()){
                    ans=max((int)ans, (int)temp.size());
                }else break;
            }
        }
        return ans;
    }
};
