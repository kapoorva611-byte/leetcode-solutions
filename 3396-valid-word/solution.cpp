class Solution {
public:
    bool isValid(string word) {
        if (word.size() < 3) return false;

        bool hasVowel = false, hasConsonant = false;

        for (char ch : word) {
            if (!isalnum(ch)) return false;  // must be letter or digit

            if (isalpha(ch)) {               // only check alphabets
                switch (tolower(ch)) {
                    case 'a': case 'e': case 'i': case 'o': case 'u':
                        hasVowel = true; break;
                    default:
                        hasConsonant = true;
                }
            }

            // ✅ early exit if both conditions already met
            if (hasVowel && hasConsonant) continue;
        }

        return hasVowel && hasConsonant;
    }
};

