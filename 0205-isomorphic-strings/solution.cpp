class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if (s.length() != t.length()) return false;

        int mapST[256] = {0};
        int mapTS[256] = {0};

        for (int i = 0; i < s.length(); i++) {
            char sc = s[i];
            char tc = t[i];

            if (mapST[sc] != mapTS[tc])
                return false;

            mapST[sc] = i + 1;
            mapTS[tc] = i + 1;
        }

        return true;
    }
};
