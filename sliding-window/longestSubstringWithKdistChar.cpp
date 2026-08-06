//Link => https://www.geeksforgeeks.org/problems/longest-k-unique-characters-substring0853

#include <bits/stdc++.h>
using namespace std;

//------- T.C = O(n) and S.C = O(1) ---------
int longestKSubstr(string &s, int k) {
    // code here
    int n = s.size();
    vector <int> freq(26);
    int len = 0;
    int win = 0;
    int j=0;
    for(int i=0;i<n;i++){
        if(freq[s[i]-'a']==0){
            win++;
        }
        while(win>k){
            freq[s[j]-'a']--;
            if(freq[s[j]-'a']==0) win--;
            j++;
        }
        if(win==k){
            len =max(len,i-j+1);
        }
        freq[s[i]-'a']++;
        
    }
    return len==0 ? -1 : len;
}

int main() {
    return 0;
}