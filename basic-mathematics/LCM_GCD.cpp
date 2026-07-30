//====== T.C = O(log(min(a,b))) and S.C = O(1)====
class Solution {
  public:
    vector<int> lcmAndGcd(int a, int b) {
        int gcd = min(a,b);
        int num = max(a,b);
        while(num){
            if(num % gcd ==0) break;
            int newNum = gcd;
            gcd = num % gcd;
            num = newNum;
        }
        int lcm = (a*b)/gcd;
        return {lcm,gcd};
    }
};