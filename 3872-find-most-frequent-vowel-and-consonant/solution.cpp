class Solution {
public:
    int maxFreqSum(string s) {
        int maxVowl=0;
        int maxConst=0;
        int freq[26];
        for(char c:s){
            int i=c-'a';
            freq[i]++;
            if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'){
                maxVowl=max(maxVowl,freq[i]);
            }
            else{
                maxConst=max(maxConst,freq[i]);
            }
        }
        return maxVowl+maxConst;
    }
};
