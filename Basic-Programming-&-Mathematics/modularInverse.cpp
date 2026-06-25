//Link => https://www.geeksforgeeks.org/problems/modular-multiplicative-inverse-1587115620

//========== T.C = O(m) and S.C = O(1) ===========
class Solution {
  public:
    int modInverse(int n, int m) {
        // code here
        if(m==1) return -1;
        if(n==1) return 1;
        for(int i=2;i<m;i++){
            if(((n*i)%m) == 1) return i;
        }
        return -1;
    }
};