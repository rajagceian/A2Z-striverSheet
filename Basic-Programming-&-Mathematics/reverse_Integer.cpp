//====== T.C = O(logn) and S.C = O(1)====
class Solution {
public:
    int reverse(int x) {
        bool isNeg = x<0;
        long num = x;
        num = abs(num);
        long ans = 0;
        while(num){
            int r = num%10;
            ans =  long(10*ans) + r;
            if(ans > INT_MAX) return 0;
            num/=10;
        }
        return isNeg==true ? -1*ans : ans;
    }
};