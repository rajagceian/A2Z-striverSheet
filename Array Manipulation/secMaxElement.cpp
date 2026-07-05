//Link => https://leetcode.com/problems/second-largest-digit-in-a-string
//---------- T.C = O(n) and S.C = O(1)------------
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int secondHighest(string s) {
        int maxi = INT_MIN;
        for(char c : s){
            if(isdigit(c)){
                maxi = max(maxi,(c-'0'));
            }
        }
        int secMaxi = INT_MIN;
        for(char c : s){
            if(isdigit(c) and maxi != (c-'0')){
                secMaxi = max(secMaxi,(c-'0'));
            }
        }
        return secMaxi==INT_MIN ? -1 : secMaxi;
    }
};