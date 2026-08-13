class Solution {
public:
    bool chk (vector<int>& v) {
        if(v[0]!=0 && v[1]!=0 && v[2]!=0) {
            return true;
        }
        else return false;
    }

    int numberOfSubstrings(string s) {
        vector<int> v(3,0);
        int ans = 0;
        int j = 0;

        for(int i=0; i < s.size(); i++) {
            v[s[i] - 'a']++;

            if(chk(v)) {
                ans += s.size() - i;
            }

            while (chk(v)) {
                v[s[j] - 'a']--;
                j++;

                if(chk(v))
                    ans += s.size() - i;
                else
                    break;
            }
        }

        return ans;
    }
};
