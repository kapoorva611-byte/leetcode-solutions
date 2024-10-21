class Solution {
public:
    int balancedStringSplit(string s) {
        int ans=0;
        int countR=0;
        int countL=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='R'){
                countR++;
            }
            else{
                countL++;
            }
            if(countL==countR){
                ans++;
            }
        }
        return ans;   
    }
};
