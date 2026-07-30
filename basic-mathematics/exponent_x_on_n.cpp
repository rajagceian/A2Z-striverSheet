//Link =>https://leetcode.com/problems/powx-n/
//========= T.C = O(logn) and S.C = O(logn) =========
class Solution {
public:
    double f(double x,long n){
        if(n==1) return x;
        else if(x==0) return 0;
        else if(n==0) return 1;
        if(n<0){
            x=1/x;
            n=-n;
        }
        double half = myPow(x,n/2);
        double ans = half*half;
        if(n%2){
            ans *= x;
        }
        return ans;
    }
    double myPow(double x, int n) {
        return f(x,1L*n);
    }
};