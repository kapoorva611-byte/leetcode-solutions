class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1) return s;

        int cycle = 2 * (numRows - 1);
        string res = "";

        for (int i = 0; i < numRows; i++) {
            int j = i;
            bool toggle = false;

            while (j < s.length()) {
                res += s[j];

                if (i == 0 || i == numRows - 1) {
                    j += cycle;
                } else {
                    if (!toggle) {
                        j += cycle - 2 * i;
                    } else {
                        j += 2 * i;
                    }
                    toggle = !toggle;
                }
            }
        }
        return res;
    }
};
