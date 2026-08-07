//Link => https://leetcode.com/problems/longest-substring-without-repeating-characters
#include <bits/stdc++.h>
using namespace std;

//------- M-1 : Using Map ---- T.C = O(n) and S.C = O(n) ------------
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        unordered_map<char,int> freq;
        int len = 0;
        int j=0;
        for(int i=0;i<n;i++){
            freq[s[i]]++;
            while(j<i && freq.size()<(i-j+1)){
                freq[s[j]]--;
                if(freq[s[j]]==0) {
                    freq.erase(s[j]);
                }
                j++;
            }
            if(freq.size()==(i-j+1)){
                len =max(len,i-j+1);
            }
        }
        return len;
    }
};

//------- M-1 : Using array ---- T.C = O(n) and S.C = O(n) ------------
class Solution2 {
public:
    int lengthOfLongestSubstring(string s) {
    int n = s.size();
    vector <int> freq(256); // alphabets,numbers,special chars
    int len = 0;
    int win = 0;
    int j=0;
    for(int i=0;i<n;i++){
        if(freq[s[i]]==0){
            win++;
        }
        freq[s[i]]++;
        while(win<(i-j+1)){
            freq[s[j]]--;
            if(freq[s[j]]==0) win--;
            j++;
        }
        
        len =max(len,i-j+1);
    }
        return len;
    }
};

int main() {
    return 0;
}