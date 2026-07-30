//Link => 


//======= Brute Force ===== T.C = O(logn) and S.C = O(1)
class Solution {
  public:
    int etf(int n) {
        int cnt = 0;

        for(int i=1;i<=n;i++){
            if(gcd(i,n)==1)
                cnt++;
        }

        return cnt;
    }
};

//======= Optimal Approach ====== T.C = O(sqrt(n)) and S.C = O(1) ======
/*
Euler's Totient has a formula:

If
        n = P1^a1 * P2^a2 *........ Here, P1,P2.. => Distinct prime factors of n

then
        etf(n) = n*(1 - 1/P1)*(1-1/P2)*......

*/
class Solution {
public:
    int etf(int n) {
        int result = n;

        for(int p = 2; p * p <= n; p++) {
            if(n % p == 0) {
                while(n % p == 0)
                    n /= p;

                result -= result / p; // or result = result*(1-1/p)
            }
        }

        if(n > 1) // Still prime factor
            result -= result / n;

        return result;
    }
};