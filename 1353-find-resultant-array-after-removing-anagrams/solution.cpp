class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        vector<string>ans;
        string prevSorted="";
        for(auto&word:words){
            string sortedWord=word;
            sort(sortedWord.begin(),sortedWord.end());
            if(sortedWord!=prevSorted){
                ans.push_back(word);
                prevSorted=sortedWord;
            }
        }
        return ans;
    }
};
