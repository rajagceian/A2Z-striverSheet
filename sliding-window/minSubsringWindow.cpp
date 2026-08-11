//Link => https://leetcode.com/problems/minimum-window-substring
#include <bits/stdc++.h>
using namespace std;
//-------- T.C = O(n*m) and S.C = O(m+n) -------------
class Solution {
public:
    string minWindow(string s, string t) {
        int n = s.size(), m = t.size();
        if (m > n) return "";

        unordered_map<char, int> mp;
        for (char ch : t) mp[ch]++;

        int i = 0, j = 0;
        int ans = INT_MAX;
        int idx = -1;
        int count = m;

        while (j < n) {
            if (mp.count(s[j])) {
                if (mp[s[j]] > 0)
                    count--;

                mp[s[j]]--;
            }
            if(count==0) cout<<i<<" ";
            while (count == 0) { // shrink the window
                if (j - i + 1 < ans) {
                    ans = j - i + 1;
                    idx = i;
                }

                if (mp.count(s[i])) {
                    mp[s[i]]++;

                    if (mp[s[i]] > 0)
                        count++;
                }

                i++;
            }

            j++;
        }

        return idx == -1 ? "" : s.substr(idx, ans);
    }
};

int main() {
    return 0;
}