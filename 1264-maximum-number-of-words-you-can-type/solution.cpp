class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        unordered_set<char> broken(brokenLetters.begin(),brokenLetters.end());
        int count=0;
        int n=text.size();
        int i=0;
       while(i<n){
            bool canType=true;
            while(i<n && text[i]!=' '){
                if(broken.count(text[i])){
                   canType= false;
                }
                i++;
            }
            if(canType){
                count++;
            }
            i++;
       }
       return count;
    }
};
