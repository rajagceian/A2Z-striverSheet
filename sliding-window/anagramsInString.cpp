//Link => https://leetcode.com/problems/find-all-anagrams-in-a-string
#include <bits/stdc++.h>
using namespace std;
//------- Sliding window ---- T.C = O(m+n) and S.C = O(1) ---------
class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        if (s.size() < p.size()) return {};

        vector<int> s1_freq(26, 0);
        vector<int> window_freq(26, 0);

        for (char c : p) {
            s1_freq[c - 'a']++;
        }

        int window_size = p.size();

        for (int i = 0; i < window_size; ++i) {
            window_freq[s[i] - 'a']++;
        }
        vector <int> ans;
        if (window_freq == s1_freq) //Compare element by element
                ans.push_back(0);

        for (int i = window_size; i < s.size(); ++i) {
            window_freq[s[i] - 'a']++;
            window_freq[s[i - window_size] - 'a']--;

            if (window_freq == s1_freq) 
                ans.push_back(i - window_size+1);
        }

        return ans;
    }
};

int main() {
    return 0;
}