//======= T.C = O(logn) and S.C = O(1) ============
class Solution {
  public:
    int sumOfDigits(int n) {
        // code here
        int ans = 0;
        while(n){
            ans += n%10;
            n/=10;
        }
        return ans;
    }
};