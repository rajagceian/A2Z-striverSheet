//Link => https://leetcode.com/problems/backspace-string-compare/solutions

#include <bits/stdc++.h>
using namespace std;
// ------- M-1 : Stack ------ T.C = O(n) and S.C = O(n)-------------

class Solution {
public:
    bool backspaceCompare(string s, string t) {
        int n=s.size(),m=t.size();
        stack <char> st1,st2;
        for(char c : s){
            if(st1.size() && c=='#'){
                st1.pop();
            } else if(c!='#')
            st1.push(c);
        }
        for(char c : t){
            if(st2.size() && c=='#'){
                st2.pop();
            } else if(c!='#')
            st2.push(c);
        }
        if(st1.size()!=st2.size()) return false;
        while(st1.size() && st2.size()){
            if(st1.top()==st2.top()){
                st1.pop();
                st2.pop();
            } else{
                return false;
            }
        }
        return true;
    }
};

//---------- M-2 : Two pointer ----- T.C =O(n) and S.C = O(1) -----------
class Solution1 {
public:
    bool backspaceCompare(string s, string t) {
        int n=s.size(),m=t.size();
        int idx=0,jdx=0;
        for(int i=0;i<n;i++){
            if(s[i]=='#'){
                idx--;
                idx = max(0,idx);
            } else{
                s[idx]=s[i];
                idx++;
            }
        }
        for(int i=0;i<m;i++){
            if(t[i]=='#'){
                jdx--;
                jdx = max(0,jdx);
            } else{
                t[jdx]=t[i];
                jdx++;
            }
        }
        if(idx!=jdx) return false;
        for(int i=0;i<idx;i++){
            if(s[i]!=t[i]) return false;
        }
        return true;
    }
};
int main() {

    return 0;
}