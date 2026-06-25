//Link => https://leetcode.com/problems/sqrtx
//========== T.C = O(logn) and S.C = O(1) ======
class Solution {
public:
    int mySqrt(int x) {
        long long lo=0;
        long long hi = x/2+1;
        while(lo<=hi){
            long long mid = lo + (hi-lo)/2;
            if(mid*mid == x) return mid;
            else if(mid*mid < x) lo = mid+ 1;
            else hi = mid - 1;
        }
        return hi;
    }
};