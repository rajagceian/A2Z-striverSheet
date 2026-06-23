//===== T.C = O(logn) and S.C = O(logn) ========
class Solution {
  public:
    bool armstrongNumber(int n) {
        // code here
        string s = to_string(n);
        int newNum = 0;
        for(char c : s){
            int d = c-'0';
            newNum += d*d*d;
        }
        return newNum == n;
    }
};