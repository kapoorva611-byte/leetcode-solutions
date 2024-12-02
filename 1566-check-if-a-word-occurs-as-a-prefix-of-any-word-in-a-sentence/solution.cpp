class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        int n=sentence.size();
        int wordIndex=1;
        for(int i=0;i<n;){
            if(sentence.substr(i,searchWord.size())==searchWord){
                return wordIndex;
            }
            while(i<n && sentence[i]!=' '){
                i++;
            }
            i++;
            wordIndex++;
        }
        return -1;
    }
};
