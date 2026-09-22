class Solution {
public:
    int characterReplacement(string s, int k) {
        // optmial 

        int l = 0;
        int r = 0;

        int maxLen = 0;
        int maxF = 0;

        int hash[26] = {0};

        while(r < s.length()) {

            // Add current character
            hash[s[r] - 'A']++;

            // Maximum frequency in current window
            maxF = max(maxF, hash[s[r] - 'A']);

            // Invalid window
            while((r - l + 1) - maxF > k) {
                hash[s[l] - 'A']--;
                l++;
            }

            // Current window is valid
            maxLen = max(maxLen, r - l + 1);

            r++;
        }

        return maxLen;
    }
};