//Link =>https://leetcode.com/problems/reverse-string
//---------Two pointer => T.C = O(n) and S.C = O(1)-----------
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void reverseString(vector<char>& s) {
        int n=s.size();
        int i=0,j=n-1;
        while(i<j){
            swap(s[i++],s[j--]);
        }
    }
};
int main() {

    return 0;
}