class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        string result;
        int n = s.size();
        int spaceIndex = 0;

        for (int i = 0; i < n; i++) {
            if (spaceIndex < spaces.size() && i == spaces[spaceIndex]) {
                result += ' '; 
                spaceIndex++;  
            }
            result += s[i]; 
        }
        return result;
    }
};

