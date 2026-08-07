//Link => https://leetcode.com/problems/longest-repeating-character-replacement/submissions/2098436984/

#include <bits/stdc++.h>
using namespace std;

//------- T.C = O(n) and S.C = O(1) -----------
class Solution {
public:
    int characterReplacement(string s, int k) {

        vector<int> freq(26, 0);

        int j = 0;
        int ans = 0;
        int maxFreq = 0;

        for (int i = 0; i < s.size(); i++) {

            freq[s[i] - 'A']++;

            maxFreq = max(maxFreq, freq[s[i] - 'A']);

            while ((i - j + 1) - maxFreq > k) {
                freq[s[j] - 'A']--;
                j++;
            }

            ans = max(ans, i - j + 1);
        }

        return ans;
    }
};

int main() {
    return 0;
}