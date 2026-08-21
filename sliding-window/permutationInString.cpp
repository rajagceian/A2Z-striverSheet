//Link => https://leetcode.com/problems/permutation-in-string

#include <bits/stdc++.h>
using namespace std;
//------ Sorting -- T.C = O(m*nlogn) and S.C = O(1) ----------
class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n=s1.size(),m=s2.size();
        if(n>m) return false;
        sort(s1.begin(),s1.end());
        for(int i=0;i<=m-n;i++){
            string temp = s2.substr(i,n);
            sort(temp.begin(),temp.end());
            if(temp==s1) return true;
        }
        return false;
    }
};

//------- Sliding window ------ T.C = O(n+m) and S.C = O(1) ---------
class Solution2 {
public:
    bool checkInclusion(string s1, string s2) {
        if (s1.size() > s2.size()) return false;

        vector<int> s1_freq(26, 0);
        vector<int> window_freq(26, 0);

        for (char c : s1) {
            s1_freq[c - 'a']++;
        }

        int window_size = s1.size();

        for (int i = 0; i < window_size; ++i) {
            window_freq[s2[i] - 'a']++;
        }

        if (window_freq == s1_freq) //Compare element by element
                return true;

        for (int i = window_size; i < s2.size(); ++i) {
            window_freq[s2[i] - 'a']++;
            window_freq[s2[i - window_size] - 'a']--;

            if (window_freq == s1_freq) return true;
        }

        return false;
    }
};
int main() {
    return 0;
}