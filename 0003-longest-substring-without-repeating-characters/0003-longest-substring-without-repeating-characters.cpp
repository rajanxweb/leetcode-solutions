class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int longest = 0;
        int maximum = 0;
        string longestSubstring = "";

        for (int i = 0; i < s.size(); i++) {
            for (int j = 0; j < longestSubstring.size(); j++) {
                if (s[i] == longestSubstring[j]) {
                    longestSubstring.erase(0, j + 1);
                    longest = longestSubstring.size();
                    break;
                }
            }

            longestSubstring.push_back(s[i]);
            longest++;

            maximum = max(maximum, longest);
        }

        return maximum;
    }
};