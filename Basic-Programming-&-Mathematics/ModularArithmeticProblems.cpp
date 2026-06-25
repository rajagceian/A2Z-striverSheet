//Link => https://leetcode.com/problems/divide-two-integers

//======= T.C = O(dividend/divisor) and S.C = O(1) ====================
class Solution {
public:
    long long f(long long dividend,long long divisor){
      bool isNegR = divisor<0;
      bool isNegD = dividend < 0;
      if(isNegR) divisor = -divisor;
      if(isNegD) dividend = -dividend;
      if(divisor==1){
        if(isNegR && isNegD) return dividend;
        return isNegR || isNegD ? -dividend : dividend;
      }
      long long q=0;
      while(dividend>=divisor){
        q++;
        dividend -= divisor;
      }  
      if(isNegR && isNegD) return q;
      return isNegR || isNegD ? -q : q;         
    }
    int divide(int dividend, int divisor) {
        long long res = f(1LL*dividend,1LL*divisor);
        if(res>INT_MAX) return INT_MAX;
        else if(res<INT_MIN) return INT_MIN;
        return  res;
    }
};